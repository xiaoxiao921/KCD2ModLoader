#pragma once

#include <config/config.hpp>
#include <input/hotkey.hpp>

namespace big
{
	struct table_patch_info_t
	{
		std::string m_mod_name;
		std::vector<uint8_t> m_patched_data;
	};

	inline std::map<std::string, std::map<std::string, std::vector<table_patch_info_t>>> g_table_name_to_added_line_to_info;
	inline std::map<std::string, std::map<std::string, std::vector<uint8_t>>> g_table_name_to_modified_line_to_original_data;
	inline std::map<std::string, std::map<std::string, std::vector<table_patch_info_t>>> g_table_name_to_modified_line_to_info;

	struct vanilla_mod_system_info
	{
		std::string m_name;
		std::string m_mod_id;
		std::string m_description;
		std::string m_author;
		std::string m_version;
		std::string m_folder_name;
		std::string m_created_on;
		std::vector<std::string> m_loaded_paks;
	};

	struct cvar_data
	{
		std::string m_help_text;
		std::string m_default_value;
	};

	inline std::map<std::string, cvar_data> g_cvar_name_to_cvar_data;
	inline std::map<std::string, std::string> g_console_command_name_to_help_text;

	inline std::vector<vanilla_mod_system_info> g_vanilla_mods;

	// global|level_name_specific -> xml filename
	inline std::unordered_map<std::string, std::unordered_set<std::string>> g_xml_context_to_modded_xml_filenames;

	// global|level_name_specific -> xml filename -> modifications buffer
	inline std::unordered_map<std::string, std::unordered_map<std::string, std::vector<std::string>>> g_xml_context_to_xml_filename_to_modifications;

	void apply_xml_patches(std::string &originalFileContent, const std::vector<std::string> &patchFileContents, bool is_inventory_preset);

	struct Vec3
	{
		float x, y, z;

		Vec3 operator*(float scalar) const
		{
			return {x * scalar, y * scalar, z * scalar};
		}

		Vec3 operator+(const Vec3 &other) const
		{
			return {x + other.x, y + other.y, z + other.z};
		}

		Vec3 operator-(const Vec3 &other) const
		{
			return {x - other.x, y - other.y, z - other.z};
		}

		Vec3 &operator+=(const Vec3 &other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			return *this;
		}

		Vec3 &operator-=(const Vec3 &other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			return *this;
		}

		Vec3 Cross(const Vec3 &other) const
		{
			return {y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x};
		}

		float Length() const
		{
			return std::sqrt(x * x + y * y + z * z);
		}

		Vec3 Normalized() const
		{
			float len = Length();
			return (len > 0) ? (*this * (1.0f / len)) : Vec3{0, 0, 0};
		}
	};

	struct AABB
	{
		Vec3 min;
		Vec3 max;
	};

	std::pair<Vec3, Vec3> GetViewCameraPositionAndDirection();

	struct Archetype
	{
		virtual ~Archetype() = default; // offset 0

		uint64_t unk_8;
		uint64_t unk_16;
		const char *m_name;
	};

	struct EntityClass
	{
		virtual ~EntityClass()        = default; // offset 0
		virtual void Pad1()           = 0;       // offset 8
		virtual const char *GetName() = 0;       // offset 16
	};

	struct CEntity;
	inline CEntity *g_player_entity                                           = nullptr;
	inline void *(*g_CEntity_SetWorldTM)(CEntity *this_, void *tm, int flags) = nullptr;

	enum EERType
	{
		eERType_NotRenderNode,
		eERType_Brush,
		eERType_Vegetation,
		eERType_Light,
		eERType_Dummy_5, //!< Used to be eERType_Cloud, preserve order for compatibility.
		eERType_MergedMeshInstance,
		eERType_FogVolume,
		eERType_Decal,
		eERType_ParticleEmitter,
		eERType_WaterVolume,
		eERType_WaterWave,
		eERType_Road,
		eERType_DistanceCloud,
		eERType_Dummy_4, // Used to be eERType_VolumeObject, preserve order for compatibility.
		eERType_Dummy_0, //!< Used to be eERType_AutoCubeMap, preserve order for compatibility.
		eERType_Rope,
		eERType_Dummy_3, //!< Used to be  eERType_PrismObject, preserve order for compatibility.
		eERType_TerrainSector,
		eERType_Dummy_2, //!< Used to be eERType_LightPropagationVolume, preserve order for compatibility.
		eERType_MovableBrush,
		eERType_GameEffect,
		eERType_BreakableGlass,
		eERType_CloudBlocker,
		eERType_MergedMesh,
		eERType_GeomCache,
		eERType_Character,
		eERType_TypesNum, //!< Must be at the end - gives the total number of ER types.
	};

	class CLodValue
	{
	public:
		CLodValue()
		{
			m_nLodA        = -1;
			m_nLodB        = -1;
			m_nDissolveRef = 0;
		}

		CLodValue(int nLodA)
		{
			m_nLodA        = nLodA;
			m_nLodB        = -1;
			m_nDissolveRef = 0;
		}

		CLodValue(int nLodA, uint8_t nDissolveRef, int nLodB)
		{
			m_nLodA        = nLodA;
			m_nLodB        = nLodB;
			m_nDissolveRef = nDissolveRef;
		}

		int LodA() const
		{
			return m_nLodA;
		}

		int LodSafeA() const
		{
			return m_nLodA == -1 ? 0 : m_nLodA;
		}

		int LodB() const
		{
			return m_nLodB;
		}

		unsigned int DissolveRefA() const
		{
			return m_nDissolveRef;
		}

		unsigned int DissolveRefB() const
		{
			return 255 - m_nDissolveRef;
		}

	private:
		int16_t m_nLodA;
		int16_t m_nLodB;
		uint8_t m_nDissolveRef;
	};

	const int MAX_GSM_CACHED_LODS_NUM = 3;
	struct IRenderNone;

	struct IShadowCaster
	{
		// 0
		virtual ~IShadowCaster() = 0;

		// 1
		virtual bool HasOcclusionmap(int nLod, void *pLightOwner) = 0;

		// 2
		virtual CLodValue ComputeLod(int wantedLod, const void *passInfo) = 0;

		// 3
		virtual void Render(const void *RendParams, const void *passInfo) = 0;

		// 4
		virtual const AABB GetBBox() const = 0;

		// 5
		virtual void FillBBox(AABB &aabb) const = 0;

		// 6
		virtual struct ICharacterInstance *GetEntityCharacter(void *pMatrix = NULL, bool bReturnOnlyVisible = false) = 0;

		// 7
		virtual EERType GetRenderNodeType() const = 0;

		void *m_unk;
	};

#define BIT8(x) ((static_cast<uint8_t>(1)) << (x))

	struct IRenderNode : public IShadowCaster
	{
		enum EInternalFlags : uint8_t
		{
			DECAL_OWNER                = BIT8(0), //!< Owns some decals.
			REQUIRES_NEAREST_CUBEMAP   = BIT8(1), //!< Pick nearest cube map.
			UPDATE_DECALS              = BIT8(2), //!< The node changed geometry - decals must be updated.
			REQUIRES_FORWARD_RENDERING = BIT8(3), //!< Special shadow processing needed.
			WAS_INVISIBLE              = BIT8(4), //!< Was invisible last frame.
			WAS_IN_VISAREA             = BIT8(5), //!< Was inside vis-ares last frame.
			WAS_FARAWAY         = BIT8(6), //!< Was considered 'far away' for the purposes of physics deactivation.
			HAS_OCCLUSION_PROXY = BIT8(7), //!< This node has occlusion proxy.
		};

		typedef uint64_t RenderFlagsType;

		struct SUpdateStreamingPriorityContext
		{
			const void *pPassInfo = nullptr;
			float distance        = 0.0f;
			float importance      = 0.0f;
			bool bFullUpdate      = false;
			int lod               = 0;
		};

	public:

		IRenderNode()
		{
			m_dwRndFlags           = 0;
			m_ucViewDistRatio      = 100;
			m_ucLodRatio           = 100;
			m_pOcNode              = nullptr;
			m_nHUDSilhouettesParam = 0;
			m_fWSMaxViewDist       = 0;
			m_nInternalFlags       = 0;
			m_nMaterialLayers      = 0;
			m_pTempData            = nullptr;
			m_pPrev = m_pNext = nullptr;

			//ZeroArray(m_shadowCacheLod);
			//ZeroArray(m_shadowCacheLastRendered);

			m_onePassTraversalFrameId        = 0;
			m_onePassTraversalShadowCascades = 0;
		}

		// 8
		virtual bool CanExecuteRenderAsJob() const = 0;

		// Debug info about object.
		// 9
		virtual const char *GetName() const = 0;

		// 10
		virtual const char *GetEntityClassName() const = 0;

		// 11
		virtual std::string GetDebugString(char type = 0) const = 0;

		// 12
		virtual float GetImportance() const = 0;

		//! Releases IRenderNode.
		// 13
		virtual void ReleaseNode(bool bImmediate = false) = 0;

		// 14
		virtual IRenderNode *Clone() const = 0;

		// TODO: Investigate what is that function.
		virtual void *Pad15() const = 0;

		//! Sets render node transformation matrix.
		// 16
		virtual void SetMatrix(const void *mat34) = 0;

		//! Gets local bounds of the render node.
		// 17
		virtual void GetLocalBounds(AABB &bbox) const = 0;

		// 18
		virtual Vec3 GetPos(bool bWorldOnly = true) const = 0;

		// 19
		virtual void SetBBox(const AABB &WSBBox) = 0;

		//! Changes the world coordinates position of this node by delta.
		//! Don't forget to call this base function when overriding it.
		// 20
		virtual void OffsetPosition(const Vec3 &delta) = 0;

		//! Is node geometry visible in passInfo's camera
		virtual bool IsVisible(const AABB &nodeBox, const float nodeDistance, const void *passInfo) const = 0;

		//! Gives access to object components.
		virtual void *GetEntityStatObj(unsigned int nSubPartId = 0, void *pMatrix34a = NULL, bool bReturnOnlyVisible = false) = 0;

		virtual void *Pad23() const = 0;

		virtual void SetEntityStatObj(void *pStatObj, const void *pMatrix34a = NULL) = 0;

		virtual void *Pad24() const = 0;
		virtual void *Pad25() const = 0;
		virtual void *Pad26() const = 0;

		//! \return IRenderMesh of the object.
		// 27
		virtual void *GetRenderMesh(int nLod) const = 0;

		//! Allows to adjust default lod distance settings.
		//! If fLodRatio is 100 - default lod distance is used.
		// 28
		virtual void SetLodRatio(int nLodRatio) = 0;

		//! Get material layers mask.
		virtual uint8_t GetMaterialLayers() const = 0;

		//! Get physical entity.
		virtual struct IPhysicalEntity *GetPhysics() const = 0;
		virtual void SetPhysics(IPhysicalEntity *pPhys)    = 0;

		//! Physicalizes if it isn't already.
		virtual void CheckPhysicalized() = 0;

		//! Physicalize the node.
		virtual void Physicalize(bool bInstant = false) = 0;

		//! Physicalize stat object's foliage.
		virtual bool PhysicalizeFoliage(bool bPhysicalize = true, int iSource = 0, int nSlot = 0) = 0;

		//! Get physical entity (rope) for a given branch (if foliage is physicalized).
		virtual IPhysicalEntity *GetBranchPhys(int idx, int nSlot = 0) = 0;

		//! \return Physicalized foliage, or NULL if it isn't physicalized.
		//virtual struct IFoliage *GetFoliage(int nSlot = 0) = 0;
		virtual void *GetFoliage(int nSlot = 0) = 0;

		//! Make sure I3DEngine::FreeRenderNodeState(this) is called in destructor of derived class.
		virtual ~IRenderNode() = 0;

		//! Set override material for this instance.
		virtual void SetMaterial(void *pMat) = 0;

		//! Queries override material of this instance.
		virtual void *GetMaterial(Vec3 *pHitPos = NULL) const = 0;
		virtual void *GetMaterialOverride() const             = 0;

		//! Used by the editor during export.
		virtual void SetCollisionClassIndex(int tableIndex) = 0;

		virtual void SetStatObjGroupIndex(int nVegetationGroupIndex) = 0;

		virtual int GetStatObjGroupId() const = 0;

		virtual void SetLayerId(uint16_t nLayerId) = 0;

		virtual uint16_t GetLayerId() const = 0;

		virtual float GetMaxViewDist() const = 0;

		virtual EERType GetRenderNodeType() const = 0;

		virtual bool IsAllocatedOutsideOf3DEngineDLL() = 0;

		virtual void Dephysicalize(bool bKeepIfReferenced = false) = 0;

		virtual void Dematerialize() = 0;

		virtual void GetMemoryUsage(void *pSizer) const = 0;

		virtual void Precache() = 0;

		virtual void UpdateStreamingPriority(const SUpdateStreamingPriorityContext &streamingContext) = 0;

		//	virtual float GetLodForDistance(float fDistance) { return 0; }

		//! Called immediately when render node becomes visible from any thread.
		//! Not reentrant, multiple simultaneous calls to this method on the same rendernode from multiple threads is not supported and should not happen
		virtual void OnRenderNodeBecomeVisibleAsync(void *pTempData, const void *passInfo) = 0;

		//! Called when RenderNode becomes visible or invisible, can only be called from the Main thread
		virtual void OnRenderNodeVisible(bool bBecomeVisible) = 0;

		virtual uint8_t GetSortPriority() const = 0;

		//! Object can be used by GI system in several ways.
		enum EGIMode
		{
			eGM_None = 0,             //!< No voxelization.
			eGM_StaticVoxelization,   //!< Incremental or asynchronous lazy voxelization.
			eGM_DynamicVoxelization,  //!< Real-time every-frame voxelization on GPU.
			eGM_HideIfGiIsActive,     //!< Hide this light source if GI is enabled
			eGM_AnalyticalProxy_Soft, //!< Analytical proxy (with shadow fading)
			eGM_AnalyticalProxy_Hard, //!< Analytical proxy (no shadow fading)
			eGM_AnalytPostOccluder,   //!< Analytical occluder (used with average light direction)
			eGM_IntegrateIntoTerrain, //!< Copy object mesh into terrain mesh and render using usual terrain materials
		};

		//! Retrieves the way object is used by GI system.
		virtual EGIMode GetGIMode() const = 0;

		virtual void SetMinSpec(RenderFlagsType nMinSpec) = 0;

		//! Allows to adjust default max view distance settings.
		//! If fMaxViewDistRatio is 100 - default max view distance is used.
		virtual void SetViewDistRatio(int nViewDistRatio) = 0;

		virtual bool GetLodDistances(const void *frameLodInfo, float *distances) const = 0;

		//! Bias value to add to the regular lod
		virtual void SetShadowLodBias(int8_t nShadowLodBias) = 0;

		//! Sets supplemental parameters used for camera-space rendering (ERF_FOB_NEAREST).
		//! Parameter values shall reflect the current render node position, as supplied with SetMatrix().
		//! Usage of this feature is optional. The benefit is increased rendering precision.
		virtual void SetCameraSpaceParams(void *cameraSpaceParams) = 0;

		//! Retrieves camera space parameters that have been previously set by a call to SetCameraSpaceParams().
		virtual void *GetCameraSpaceParams() const = 0;

		virtual void SetEditorObjectId(uint32_t nEditorObjectId) = 0;

		virtual void SetEditorObjectInfo(bool bSelected, bool bHighlighted) = 0;

		// Set a new owner entity
		virtual void SetOwnerEntity(void *pEntity) = 0;

		// Retrieve a pointer to the entity who owns this render node.
		virtual void *GetOwnerEntity() const = 0;

	private:
		template<class T>
		friend struct TDoublyLinkedList;
		friend struct IOctreeNode;
		friend class COctreeNode;

		//! Every sector has linked list of IRenderNode objects.
		IRenderNode *m_pNext, *m_pPrev;

	protected:

		//! Current objects tree cell.
		IOctreeNode *m_pOcNode;

		//! Render flags (@see ERenderNodeFlags)
		RenderFlagsType m_dwRndFlags;

		//! Hides/shows node in renderer.
		virtual void Hide(bool bHide) = 0;

		//! Enables/disables instancing on the node
		virtual void Instance(bool bInstance) = 0;

	public:
		//! Pointer to temporary data allocated only for currently visible objects.
		void *m_pTempData       = nullptr;
		int m_manipulationFrame = -1;

		//! Hud silhouette parameter, default is black with alpha zero
		uint32_t m_nHUDSilhouettesParam;

		//! Used to request visiting of the node during one-pass traversal
		union
		{
			struct
			{
				uint32_t m_onePassTraversalFrameId;
				uint32_t m_onePassTraversalShadowCascades;
			};
		};

		//! Max view distance.
		float m_fWSMaxViewDist;

		//! Flags for render node internal usage, one or more bits from EInternalFlags.
		uint8_t m_nInternalFlags;

		//! Max view distance settings.
		uint8_t m_ucViewDistRatio;

		//! LOD settings.
		uint8_t m_ucLodRatio;

		//! Material layers bitmask -> which material layers are active.
		uint8_t m_nMaterialLayers;
	}; // namespace big

	struct IBrush : public IRenderNode
	{
		virtual const void *GetMatrix34() const            = 0;
		virtual void SetDrawLast(bool enable)              = 0;
		virtual void DisablePhysicalization(bool bDisable) = 0; //!< This render node will not be physicalized
		virtual float GetScale() const                     = 0;

		// Hide mask disable individual sub-objects rendering in the compound static objects
		// Only implemented by few nodes.
		//virtual void SetSubObjectHideMask(hidemask subObjHideMask);
		virtual void SetSubObjectHideMask(uint64_t subObjHideMask) = 0;
	};

	struct Cry3DEngineBase
	{
	};

	class CBrush : public IBrush, public Cry3DEngineBase
	{
		friend class COctreeNode;

	public:
		//CBrush();
		virtual ~CBrush() = 0;

		//inline Vec3 GetPos()
		//{
		//return {m_Matrix[3], m_Matrix[7], m_Matrix[11]};
		//}

		virtual bool HasChanged() = 0;

		const void *GetMatrix34() const
		{
			return m_Matrix;
		}

		bool GetDrawLast() const
		{
			return m_bDrawLast;
		}

		bool HasDeformableData() const
		{
			return m_pDeform != NULL;
		}

	private:

	public:
		// Transformation Matrix
		//Matrix34 m_Matrix;
		float m_Matrix[3 * 4];

		// Physical Entity, when this node is physicalized.
		IPhysicalEntity *m_pPhysEnt = nullptr;

		//! Override material, will override default material assigned to the Geometry.
		//_smart_ptr<IMaterial> m_pMaterial;
		void *m_pMaterial;

		uint16_t m_collisionClassIdx = 0;
		uint16_t m_nLayerId          = 0;

		// Geometry referenced and rendered by this node.
		//_smart_ptr<CStatObj> m_pStatObj;
		void *m_pStatObj;

		//CDeformableNode *m_pDeform = nullptr;
		void *m_pDeform = nullptr;
		//IFoliage *m_pFoliage = nullptr;
		void *m_pFoliage = nullptr;

		uint32_t m_bVehicleOnlyPhysics : 1;
		uint32_t m_bDrawLast           : 1;
		uint32_t m_bNoPhysicalize      : 1;

		// World space bounding box for this node.
		AABB m_WSBBox;

		// Last frame this object moved
		uint32_t m_lastMoveFrameId = 0;
		// Hide mask disable individual sub-objects rendering in the compound static objects
		//hidemask m_nSubObjHideMask;
		uint64_t m_nSubObjHideMask;

		uint64_t m_unk2;
		uint64_t m_unk3;
		uint64_t m_unk4;
		uint64_t m_unk5;
		uint64_t m_unk6;
	};

#pragma pack(push, 1)

	struct CEntity
	{
		virtual ~CEntity()              = default; // offset 0
		virtual uint32_t GetId()        = 0;       // offset 8
		virtual __int64 GetGuid()       = 0;       // offset 16
		virtual EntityClass *GetClass() = 0;       // offset 24
		virtual void Pad4()             = 0;
		virtual void Pad5()             = 0;
		virtual void Pad6()             = 0;
		virtual void Pad7()             = 0;
		virtual void Pad8()             = 0;
		virtual void Pad9()             = 0;
		virtual void Pad10()            = 0;
		virtual void Pad11()            = 0;
		virtual void Pad12()            = 0;
		virtual void Pad13()            = 0;
		virtual void Pad14()            = 0;
		virtual void Pad15()            = 0;
		virtual void Pad16()            = 0;
		virtual void Pad17()            = 0;
		virtual const char *GetName()   = 0; // offset 144
		virtual void Pad19()            = 0;
		virtual void Pad20()            = 0;
		virtual void Pad21()            = 0;
		virtual void Pad22()            = 0;
		virtual void Pad23()            = 0;
		virtual void Pad24()            = 0;
		virtual void Pad25()            = 0;
		virtual void Pad26()            = 0;
		virtual void Pad27()            = 0;
		virtual void Pad28()            = 0;
		virtual void Pad29()            = 0;
		virtual void Pad30()            = 0;
		virtual void Pad31()            = 0;
		virtual void Pad32()            = 0;
		virtual void Pad33()            = 0;
		virtual void Pad34()            = 0;
		virtual void Pad35()            = 0;
		virtual void Pad36()            = 0;
		virtual void Pad37()            = 0;
		virtual void Pad38()            = 0;
		virtual void Pad39()            = 0;
		virtual void Pad40()            = 0;
		virtual void Pad41()            = 0;
		virtual void Pad42()            = 0;
		virtual void Pad43()            = 0;
		virtual void Pad44()            = 0;
		virtual void Pad45()            = 0;
		virtual void GetPos(Vec3 &pos)  = 0; // offset 368
		virtual void Pad47()            = 0;
		virtual void Pad48()            = 0;
		virtual void Pad49()            = 0;
		virtual void Pad50()            = 0;
		virtual void Pad51()            = 0;
		virtual void Pad52()            = 0;
		virtual bool IsActive()         = 0; // offset 424
		virtual void Pad54()            = 0;
		virtual void Pad55()            = 0;
		virtual void Pad56()            = 0;
		virtual void Pad57()            = 0;
		virtual void Pad58()            = 0;
		virtual void Pad59()            = 0;
		virtual void Pad60()            = 0;
		virtual void Pad61()            = 0;
		virtual void Pad62()            = 0;
		virtual bool IsHidden()         = 0; // offset 504
		virtual void Pad64()            = 0;
		virtual void Pad65()            = 0;
		virtual void Pad66()            = 0;
		virtual void Pad67()            = 0;
		virtual void Pad68()            = 0;
		virtual void Pad69()            = 0;
		virtual void Pad70()            = 0;
		virtual void Pad71()            = 0;
		virtual void Pad72()            = 0;
		virtual void Pad73()            = 0;
		virtual void Pad74()            = 0;
		virtual void Pad75()            = 0;
		virtual void Pad76()            = 0;
		virtual void Pad77()            = 0;
		virtual void *GetPhysics()      = 0;

		uint64_t unk_1;
		uint64_t unk_2;
		uint64_t unk_3;
		uint64_t unk_4;
		Archetype *m_archetype;
		uint64_t unk_5;
		uint64_t unk_6;
		uint64_t unk_7;
		uint64_t unk_8;
		uint64_t unk_9;
		uint64_t unk_10;
		uint32_t unk_11;
		float m_world_pos_x;
		uint64_t unk_12;
		uint32_t unk_13;
		float m_world_pos_y;
		uint64_t unk_14;
		uint32_t unk_15;
		float m_world_pos_z;

		inline Vec3 GetWorldPos()
		{
			Vec3 res;

			res.x = m_world_pos_x;
			res.y = m_world_pos_y;
			res.z = m_world_pos_z;

			//LOG(INFO) << res.x << " " << res.y << " " << res.z;
			//Logger::FlushQueue();

			return res;
		}

		inline void SetWorldPos(const Vec3 &newPos)
		{
			const auto Entity = (uintptr_t)g_player_entity;

			float matrix[3 * 4];

			memcpy(matrix, (void *)(Entity + 88), sizeof(matrix));

			matrix[3]  = newPos.x;
			matrix[7]  = newPos.y;
			matrix[11] = newPos.z;

			// Apply the new transformation matrix
			g_CEntity_SetWorldTM(g_player_entity, matrix, 0x40'00'00);
		}
	};

#pragma pack(pop)

	static_assert(offsetof(CEntity, m_world_pos_x) == 100);
	static_assert(offsetof(CEntity, m_world_pos_y) == 116);
	static_assert(offsetof(CEntity, m_world_pos_z) == 132);
	static_assert(offsetof(CEntity, m_archetype) == 40);

	inline std::vector<CEntity *> g_entities;

	inline toml_v2::config_file::config_entry<bool> *g_show_entity_inspector           = nullptr;
	inline toml_v2::config_file::config_entry<bool> *g_show_entity_metadata_inspector  = nullptr;
	inline toml_v2::config_file::config_entry<bool> *g_show_entity_xml_infos_inspector = nullptr;
	inline toml_v2::config_file::config_entry<bool> *g_show_cbrush_inspector           = nullptr;
	inline toml_v2::config_file::config_entry<bool> *g_show_ptf_inspector              = nullptr;

	inline hotkey g_target_entity_on_crosshair("target_entity_on_crosshair", 0);

	inline toml_v2::config_file::config_entry<bool> *g_noclip_enabled = nullptr;
	inline hotkey g_noclip_enabled_keybind("noclip_enabled", 0);
	inline hotkey g_noclip_forward("noclip_forward", 'W');
	inline hotkey g_noclip_backward("noclip_backward", 'S');
	inline hotkey g_noclip_left("noclip_left", 'A');
	inline hotkey g_noclip_right("noclip_right", 'D');
	inline hotkey g_noclip_up("noclip_up", VK_SPACE);
	inline hotkey g_noclip_down("noclip_down", VK_CONTROL);
	inline toml_v2::config_file::config_entry<double> *g_noclip_speed_default    = nullptr;
	inline toml_v2::config_file::config_entry<double> *g_noclip_speed_multiplier = nullptr;
	inline hotkey g_noclip_speed_multiplier_keybind("noclip_speed_multiplier_keybind", VK_SHIFT);

	struct CEntitySystem
	{
		virtual ~CEntitySystem()                            = default;
		virtual void Pad1()                                 = 0;
		virtual void Pad2()                                 = 0;
		virtual void Pad3()                                 = 0;
		virtual void Pad4()                                 = 0;
		virtual void Pad5()                                 = 0;
		virtual void Pad6()                                 = 0;
		virtual void Pad7()                                 = 0;
		virtual void Pad8()                                 = 0;
		virtual void Pad9()                                 = 0;
		virtual void Pad10()                                = 0;
		virtual void Pad11()                                = 0;
		virtual void Pad12()                                = 0;
		virtual void Pad13()                                = 0;
		virtual void Pad14()                                = 0;
		virtual void Pad15()                                = 0;
		virtual void Pad16()                                = 0;
		virtual void Pad17()                                = 0;
		virtual void Pad18()                                = 0;
		virtual void Pad19()                                = 0;
		virtual void Pad20()                                = 0;
		virtual __int64 GetEntityIterator()                 = 0;
		virtual void Pad22()                                = 0;
		virtual void Pad23()                                = 0;
		virtual void Pad24()                                = 0;
		virtual void Pad25()                                = 0;
		virtual void Pad26()                                = 0;
		virtual void Pad27()                                = 0;
		virtual void Pad28()                                = 0;
		virtual void Pad29()                                = 0;
		virtual void Pad30()                                = 0;
		virtual void Pad31()                                = 0;
		virtual void Pad32()                                = 0;
		virtual void Pad33()                                = 0;
		virtual void Pad34()                                = 0;
		virtual void Pad35()                                = 0;
		virtual void Pad36()                                = 0;
		virtual void Pad37()                                = 0;
		virtual void Pad38()                                = 0;
		virtual void Pad39()                                = 0;
		virtual void Pad40()                                = 0;
		virtual void Pad41()                                = 0;
		virtual void Pad42()                                = 0;
		virtual void Pad43()                                = 0;
		virtual void Pad44()                                = 0;
		virtual void Pad45()                                = 0;
		virtual void Pad46()                                = 0;
		virtual void Pad47()                                = 0;
		virtual void Pad48()                                = 0;
		virtual void Pad49()                                = 0;
		virtual void Pad50()                                = 0;
		virtual void Pad51()                                = 0;
		virtual void Pad52()                                = 0;
		virtual void Pad53()                                = 0;
		virtual void Pad54()                                = 0;
		virtual void Pad55()                                = 0;
		virtual void Pad56()                                = 0;
		virtual void Pad57()                                = 0;
		virtual void Pad58()                                = 0;
		virtual void Pad59()                                = 0;
		virtual void Pad60()                                = 0;
		virtual void Pad61()                                = 0;
		virtual void Pad62()                                = 0;
		virtual void Pad63()                                = 0;
		virtual void Pad64()                                = 0;
		virtual void Pad65()                                = 0;
		virtual void Pad66()                                = 0;
		virtual void Pad67()                                = 0;
		virtual void Pad68()                                = 0;
		virtual void Pad69()                                = 0;
		virtual void Pad70()                                = 0;
		virtual __int64 GetEntityLayerData(CEntity *entity) = 0;
	};

	inline CEntitySystem *g_CEntitySystem = nullptr;

	struct xml_node_metadata_t
	{
		// id is parent id + this name
		std::string m_id;

		std::string m_name;

		// attributes and their potential values
		std::map<std::string, std::set<std::string>> m_attributes;
		// attributes and the EntityClass they are available on.
		std::map<std::string, std::set<std::string>> m_attributes_entityclass;

		// potential children ids.
		std::set<std::string> m_childrens;
		// children ids and the EntityClass they are available on.
		std::map<std::string, std::set<std::string>> m_childrens_entityclass;
	};

	struct entity_xml_info_t
	{
		// id is parent id + this name
		// is same as xml_node_metadata_t, for retrieving potential attributes, childrens, values, and so on for the Editor / Add / Modify Data part.
		std::string m_id;

		std::string m_name;

		// Only used by Root Entity xml nodes.
		std::string m_entity_name;
		// Only used by Root Entity xml nodes.
		std::string m_entity_class_name;

		// attribute name + attribute value
		std::vector<std::pair<std::string, std::string>> m_attributes;

		// childrens
		std::vector<entity_xml_info_t *> m_childrens;
	};

	struct EntityInfo
	{
		std::string name;
		std::string name_lower;
		std::string class_name;
		std::string class_name_lower;
		std::string archetype_name;
		std::string archetype_name_lower;
		uint32_t id;
		std::string id_string;
		uint32_t id_mask;
		uint32_t id_salt;
		std::string layer_name;
		std::string layer_name_lower;
		uint16_t layer_id = 0;
		std::string guid;
	};

	inline std::unordered_map<CEntity *, EntityInfo> g_entity_infos;
	inline std::vector<CBrush *> g_cbrushes;

	inline std::recursive_mutex g_xml_info_mutex;
	inline std::map<decltype(xml_node_metadata_t::m_id), xml_node_metadata_t> g_entity_xml_metadata;
	inline std::unordered_map<std::string, entity_xml_info_t *> g_entity_guid_to_xml_infos;
	inline std::vector<entity_xml_info_t *> g_entity_xml_infos;

	inline std::vector<int> g_entities_filtered;

	inline uintptr_t g_CD3D9Renderer = 0;

	using CD3D9Renderer_ProjectToScreen_t = bool (*)(uintptr_t this_, float ptx, float pty, float ptz, float *sx, float *sy, float *sz);
	/*
		ptx (float) - world x-coordinate.
		pty (float) - world y-coordinate.
		ptz (float) - world z-coordinate.
		sx (float)* - Pointer to the resulting screen space x-coordinate.
		sy (float)* - Pointer to the resulting screen space x-coordinate.
		sz (float)* - Pointer to the depth value (typically between 0.0 and 1.0 in normalized device coordinates).
		Returns true if successful.
	*/
	inline CD3D9Renderer_ProjectToScreen_t g_CD3D9Renderer_ProjectToScreen = nullptr;

	using CD3D9Renderer_UnProjectFromScreen_t = int (*)(void *this_, float sx, float sy, float sz, float *px, float *py, float *pz);
	/*
		sx (float) - The x-coordinate in screen space.
		sy (float) - The y-coordinate in screen space.
		sz (float) - The depth value (typically between 0.0 and 1.0 in normalized device coordinates).
		px (float)* - Pointer to the resulting world x-coordinate.
		py (float)* - Pointer to the resulting world y-coordinate.
		pz (float)* - Pointer to the resulting world z-coordinate.
	*/
	inline CD3D9Renderer_UnProjectFromScreen_t g_CD3D9Renderer_UnProjectFromScreen = nullptr;

	struct IPhysicalEntity
	{
		virtual ~IPhysicalEntity()                              = default;
		virtual void Pad1()                                     = 0;
		virtual void Pad2()                                     = 0;
		virtual void Pad3()                                     = 0;
		virtual void Pad4()                                     = 0;
		virtual void Pad5()                                     = 0;
		virtual void Pad6()                                     = 0;
		virtual void Pad7()                                     = 0;
		virtual void Pad8()                                     = 0;
		virtual void Pad9()                                     = 0;
		virtual CEntity *GetForeignData(long long foreign_id)   = 0;
		virtual long long GetiForeignData(long long foreign_id) = 0;
	};

	struct ray_hit_t
	{
		float dist;

		IPhysicalEntity *pCollider;

		int ipart;
		int partid;
		short surface_idx;
		short idmatOrg;
		int foreignIdx;
		int iNode;
		Vec3 pt;
		Vec3 n;
		int bTerrain;
		int iPrim;
		ray_hit_t *next;
	};

	enum geom_flags
	{
		//! collisions between parts are checked if (part0->flagsCollider & part1->flags) !=0
		geom_colltype0    = 0x00'01,
		geom_colltype1    = 0x00'02,
		geom_colltype2    = 0x00'04,
		geom_colltype3    = 0x00'08,
		geom_colltype4    = 0x00'10,
		geom_colltype5    = 0x00'20,
		geom_colltype6    = 0x00'40,
		geom_colltype7    = 0x00'80,
		geom_colltype8    = 0x01'00,
		geom_colltype9    = 0x02'00,
		geom_colltype10   = 0x04'00,
		geom_colltype11   = 0x08'00,
		geom_colltype12   = 0x10'00,
		geom_colltype13   = 0x20'00,
		geom_colltype14   = 0x40'00,
		geom_colltype_ray = 0x80'00,   //!< special colltype used by raytracing by default
		geom_floats       = 0x1'00'00, //!< colltype required to apply buoyancy
		geom_proxy = 0x2'00'00, //!< only used in AddGeometry to specify that this geometry should go to pPhysGeomProxy
		geom_structure_changes = 0x4'00'00,  //!< part is breaking/deforming
		geom_can_modify        = 0x8'00'00,  //!< geometry is cloned and is used in this entity only
		geom_squashy           = 0x10'00'00, //!< part has 'soft' collisions (used for tree foliage proxy)
		geom_log_interactions = 0x20'00'00, //!< part will post EventPhysBBoxOverlap whenever something happens inside its bbox
		geom_monitor_contacts   = 0x40'00'00,   //!< part needs collision callback from the solver (used internally)
		geom_manually_breakable = 0x80'00'00,   //!< part is breakable outside the physics
		geom_no_coll_response   = 0x1'00'00'00, //!< collisions are detected and reported, but not processed
		geom_mat_substitutor = 0x2'00'00'00, //!< geometry is used to change other collision's material id if the collision point is inside it
		geom_break_approximation = 0x4'00'00'00, //!< applies capsule approximation after breaking (used for tree trunks)
		geom_no_particle_impulse = 0x8'00'00'00, //!< phys particles don't apply impulses to this part; should be used in flagsCollider
		geom_destroyed_on_break = 0x2'00'00'00,  //!< should be used in flagsCollider
		geom_allow_id_duplicates = 0x1'00'00'00, //!< doesn't check if id is already used; should be set in flagsCollider
		geom_ignore_BBox = 0x20'00'00'00,        //!< don't include the part in entity world BBox computation
		//! mnemonic group names
		geom_colltype_player        = geom_colltype1,
		geom_colltype_explosion     = geom_colltype2,
		geom_colltype_vehicle       = geom_colltype3,
		geom_colltype_foliage       = geom_colltype4,
		geom_colltype_debris        = geom_colltype5,
		geom_colltype_foliage_proxy = geom_colltype13,
		geom_colltype_obstruct      = geom_colltype14,
		geom_colltype_solid         = 0x0F'FF & ~geom_colltype_explosion,
		geom_collides               = 0xFF'FF
	};

	enum surface_flags
	{
		sf_pierceable_mask    = 0x0F,
		sf_max_pierceable     = 0x0F,
		sf_important          = 0x2'00,
		sf_manually_breakable = 0x4'00,
		sf_matbreakable_bit   = 16
	};

	enum rwi_flags
	{
		rwi_ignore_terrain_holes    = 0x20,
		rwi_ignore_noncolliding     = 0x40,
		rwi_ignore_back_faces       = 0x80,
		rwi_ignore_solid_back_faces = 0x1'00,
		rwi_pierceability_mask      = 0x0F,
		rwi_pierceability0          = 0,
		rwi_stop_at_pierceable      = 0x0F,
		rwi_max_piercing            = 0x10, //!< the ray will pierce all surfaces (including those with pierceability 0)
		rwi_separate_important_hits = sf_important, //!< among pierceble hits, materials with sf_important will have priority
		rwi_colltype_bit = 16, //!< used to manually specify collision geometry types (default is geom_colltype_ray)
		rwi_colltype_any = 0x4'00, //!< if several colltype flag are specified, switches between requiring all or any of them in a geometry
		rwi_queue = 0x8'00, //!< queues the RWI request, when done it'll generate EventPhysRWIResult
		rwi_force_pierceable_noncoll = 0x10'00, //!< non-colliding geometries will be treated as pierceable regardless of the actual material
		rwi_update_last_hit = 0x40'00, //!< update phitLast with the current hit results (should be set if the last hit should be reused for a "warm" start)
		rwi_any_hit = 0x80'00 //!< returns the first found hit for meshes, not necessarily the closets
	};

	enum phentity_flags
	{
		// PE_PARTICLE-specific flags
		particle_single_contact       = 0x01, //!< Full stop after first contact.
		particle_constant_orientation = 0x02, //!< Forces constant orientation.
		particle_no_roll = 0x04, //!< 'sliding' mode; entity's 'normal' vector axis will be alinged with the ground normal.
		particle_no_path_alignment = 0x08, //!< Unless set, entity's y axis will be aligned along the movement trajectory.
		particle_no_spin            = 0x10,   //!< Disables spinning while flying.
		particle_no_self_collisions = 0x1'00, //!< Disables collisions with other particles.
		particle_no_impulse = 0x2'00, //!< Particle will not add hit impulse (expecting that some other system will).

		// PE_LIVING-specific flags
		lef_push_objects = 0x01,
		lef_push_players = 0x02, //!< Push objects and players during contacts.
		lef_snap_velocities = 0x04, //!< Quantizes velocities after each step (was ised in MP for precise deterministic sync).
		lef_loosen_stuck_checks = 0x08, //!< Don't do additional intersection checks after each step (recommended for NPCs to improve performance).
		lef_report_sliding_contacts = 0x10, //!< Unless set, 'grazing' contacts are not reported.

		// PE_ROPE-specific flags
		rope_findiff_attached_vel = 0x01, //!< Approximate velocity of the parent object as v = (pos1-pos0)/time_interval.
		rope_no_solver = 0x02, //!< No velocity solver; will rely on stiffness (if set) and positional length enforcement.
		rope_ignore_attachments = 0x4, //!< No collisions with objects the rope is attached to.
		rope_target_vtx_rel0    = 0x08,
		rope_target_vtx_rel1    = 0x10, //!< Whether target vertices are set in the parent entity's frame.
		rope_subdivide_segs = 0x1'00, //!< Turns on 'dynamic subdivision' mode (only in this mode contacts in a strained state are handled correctly).
		rope_no_tears              = 0x2'00,     //!< Rope will not tear when it reaches its force limit, but stretch.
		rope_collides              = 0x20'00'00, //!< Rope will collide with objects other than the terrain.
		rope_collides_with_terrain = 0x40'00'00, //!< Rope will collide with the terrain.
		rope_collides_with_attachment = 0x80, //!< Rope will collide with the objects it's attached to even if the other collision flags are not set.
		rope_no_stiffness_when_colliding = 0x10'00'00'00, //!< Rope will use stiffness 0 if it has contacts.

		//! PE_SOFT-specific flags
		se_skip_longest_edges = 0x01, //!< the longest edge in each triangle with not participate in the solver
		se_rigid_core         = 0x02, //!< soft body will have an additional rigid body core

		//! PE_RIGID-specific flags (note that PE_ARTICULATED and PE_WHEELEDVEHICLE are derived from it)
		ref_use_simple_solver  = 0x01, //!< use penalty-based solver (obsolete)
		ref_no_splashes        = 0x04, //!< will not generate EventPhysCollisions when contacting water
		ref_checksum_received  = 0x04,
		ref_checksum_outofsync = 0x08, //!< obsolete
		ref_small_and_fast = 0x1'00, //!< entity will trace rays against alive characters; set internally unless overriden

		//! PE_ARTICULATED-specific flags
		aef_recorded_physics = 0x02, //!< specifies a an entity that contains pre-baked physics simulation

		//! PE_WHEELEDVEHICLE-specific flags
		wwef_fake_inner_wheels = 0x08, //!< exclude wheels between the first and the last one from the solver
		                               //! (only wheels with non-0 suspension are considered)

		//! general flags
		pef_parts_traceable     = 0x10,   //!< each entity part will be registered separately in the entity grid
		pef_disabled            = 0x20,   //!< entity will not be simulated
		pef_never_break         = 0x40,   //!< entity will not break or deform other objects
		pef_deforming           = 0x80,   //!< entity undergoes a dynamic breaking/deforming
		pef_pushable_by_players = 0x2'00, //!< entity can be pushed by playerd
		pef_traceable           = 0x4'00,
		particle_traceable      = 0x4'00,
		rope_traceable          = 0x4'00, //!< entity is registered in the entity grid
		pef_update = 0x8'00, //!< only entities with this flag are updated if ent_flagged_only is used in TimeStep()
		pef_monitor_state_changes = 0x10'00, //!< generate immediate events for simulation class changed (typically rigid bodies falling asleep)
		pef_monitor_collisions    = 0x20'00,   //!< generate immediate events for collisions
		pef_monitor_env_changes   = 0x40'00,   //!< generate immediate events when something breaks nearby
		pef_never_affect_triggers = 0x80'00,   //!< don't generate events when moving through triggers
		pef_invisible             = 0x1'00'00, //!< will apply certain optimizations for invisible entities
		pef_ignore_ocean          = 0x2'00'00, //!< entity will ignore global water area
		pef_fixed_damping         = 0x4'00'00, //!< entity will force its damping onto the entire group
		pef_monitor_poststep      = 0x8'00'00, //!< entity will generate immediate post step events
		pef_always_notify_on_deletion = 0x10'00'00, //!< when deleted, entity will awake objects around it even if it's not referenced (has refcount 0)
		pef_override_impulse_scale = 0x20'00'00, //!< entity will ignore breakImpulseScale in PhysVars
		pef_players_can_break      = 0x40'00'00, //!< playes can break the entiy by bumping into it
		pef_cannot_squash_players = 0x10'00'00'00, //!< entity will never trigger 'squashed' state when colliding with players
		pef_ignore_areas      = 0x80'00'00,        //!< entity will ignore phys areas (gravity and water)
		pef_log_state_changes = 0x1'00'00'00, //!< entity will log simulation class change events
		pef_log_collisions    = 0x2'00'00'00, //!< entity will log collision events
		pef_log_env_changes   = 0x4'00'00'00, //!< entity will log EventPhysEnvChange when something breaks nearby
		pef_log_poststep      = 0x8'00'00'00, //!< entity will log EventPhysPostStep events
	};

	enum entity_query_flags
	{
		ent_static         = 1,
		ent_sleeping_rigid = 2,
		ent_rigid          = 4,
		ent_living         = 8,
		ent_independent    = 16,
		ent_deleted        = 128,
		ent_terrain        = 0x1'00,
		ent_all            = ent_static | ent_sleeping_rigid | ent_rigid | ent_living | ent_independent | ent_terrain,
		ent_flagged_only   = pef_update,
		ent_skip_flagged   = pef_update * 2, //!< "flagged" meas has pef_update set
		ent_areas          = 32,
		ent_triggers       = 64,
		ent_ignore_noncolliding    = 0x1'00'00,
		ent_sort_by_mass           = 0x2'00'00, //!< sort by mass in ascending order
		ent_allocate_list          = 0x4'00'00, //!< if not set, the function will return an internal pointer
		ent_water                  = 0x2'00,    //!< can only be used in RayWorldIntersection
		ent_no_ondemand_activation = 0x8'00'00, //!< can only be used in RayWorldIntersection
		ent_delayed_deformations = 0x8'00'00, //!< queues procedural breakage requests; can only be used in SimulateExplosion
		ent_addref_results = 0x10'00'00, //!< will call AddRef on each entity in the list (expecting the caller call Release)
		ent_use_sync_coords = 0x20'00'00, //<! use entity coords that are sync'ed to the last poststep event pump
		ent_reserved2       = 0x20'00'00'00,
		ent_reserved1       = 0x40'00'00'00
	};

	void target_entity_on_crosshair();
	void target_entity_on_crosshair_include_cbrush();
	void target_entity_on_screen_cursor();
	inline int g_selected_index_entity_detail_inspector = -1;
	inline int g_selected_cbrush_detail_inspector       = -1;

	inline uintptr_t g_ISystem         = 0;
	inline uintptr_t *g_gEnv_pGame_ptr = 0;

	inline uintptr_t g_C_PlayerStateMovement = 0;
	inline uintptr_t g_C_Player              = 0;

	using RayWorldIntersection_t = int (*)(__int64 IPhysicalWorld_instance, Vec3 *source, Vec3 *direction, unsigned int iEntTypes, unsigned int flags, ray_hit_t *hits, int nmaxhits, void **pSkipEnts, int nSkipEnts, __int64 pForeignData, int iForeignData, const char *pNameTag);
	inline RayWorldIntersection_t g_RayWorldIntersection = nullptr;

	inline int RayWorldIntersection(const Vec3 &source, const Vec3 &direction, unsigned int iEntTypes, unsigned int flags, ray_hit_t *hits, int nmaxhits, void **pSkipEnts = 0, int nSkipEnts = 0, __int64 pForeignData = 0, int iForeignData = 0, const char *pNameTag = "RayWorldIntersection(Physics)")
	{
		// ISystem_GetIPhysicalWorld_func vtable offset found in the function that call RayWorldIntersection and use RayWorldIntersection(Script) as parameter
		const auto ISystem_GetIPhysicalWorld_func = (*reinterpret_cast<void ***>(g_ISystem))[74];
		const auto IPhysicalWorld_instance        = ((__int64 (*)(uint64_t))ISystem_GetIPhysicalWorld_func)(g_ISystem);
		return g_RayWorldIntersection(IPhysicalWorld_instance, (Vec3 *)&source, (Vec3 *)&direction, iEntTypes, flags, hits, nmaxhits, pSkipEnts, nSkipEnts, pForeignData, iForeignData, pNameTag);
	}

	inline std::vector<std::string> g_lua_execute_buffer_queue;

	void CEntitySystem_DumpEntity(CEntitySystem *entity_system, CEntity *entity);
	void CEntitySystem_DumpEntities(CEntitySystem *CEntitySystem_ptr);

	inline std::unordered_set<std::string> g_fmod_events;

	using fmodstudio_loadbankfile_t = __int64 (*)(void *this_, const char *filename, __int64 fmod_studio_load_bank_flags, void **bank);
	inline fmodstudio_loadbankfile_t fmodstudio_loadbankfile_orig = nullptr;

	using fmodstudio_getevent_t = __int64 (*)(void *fmodstudio_event_system_this, const char *event_name, void **event_description_result);

	inline fmodstudio_getevent_t fmodstudio_getevent_orig = nullptr;

	using fmodstudio_bank_unload_t                              = __int64 (*)(void *this_);
	inline fmodstudio_bank_unload_t fmodstudio_bank_unload_orig = nullptr;

	inline void *g_fmodstudio_instance = nullptr;

	template<class T>
	inline void ForceWrite(T &dst, const T &src)
	{
		DWORD old_flag;
		::VirtualProtect(&dst, sizeof(T), PAGE_EXECUTE_READWRITE, &old_flag);
		dst = src;
		::VirtualProtect(&dst, sizeof(T), old_flag, &old_flag);
	}

	template<class F>
	inline bool EachImportFunction(HMODULE module, const char *dllname, const F &f)
	{
		if (module == 0)
		{
			return false;
		}

		size_t ImageBase             = (size_t)module;
		PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)ImageBase;
		if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE)
		{
			return false;
		}
		PIMAGE_NT_HEADERS pNTHeader = (PIMAGE_NT_HEADERS)(ImageBase + pDosHeader->e_lfanew);

		size_t RVAImports = pNTHeader->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
		if (RVAImports == 0)
		{
			return false;
		}

		IMAGE_IMPORT_DESCRIPTOR *pImportDesc = (IMAGE_IMPORT_DESCRIPTOR *)(ImageBase + RVAImports);
		while (pImportDesc->Name != 0)
		{
			if (!dllname || stricmp((const char *)(ImageBase + pImportDesc->Name), dllname) == 0)
			{
				IMAGE_IMPORT_BY_NAME **func_names = (IMAGE_IMPORT_BY_NAME **)(ImageBase + pImportDesc->Characteristics);
				void **import_table               = (void **)(ImageBase + pImportDesc->FirstThunk);
				for (size_t i = 0;; ++i)
				{
					if ((size_t)func_names[i] == 0)
					{
						break;
					}
					const char *funcname = (const char *)(ImageBase + (size_t)func_names[i]->Name);
					f(funcname, import_table[i]);
				}
			}
			++pImportDesc;
		}
		return true;
	}

	void kcd2_init();
} // namespace big
