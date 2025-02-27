include(FetchContent)

FetchContent_Declare(
	zip
	GIT_REPOSITORY https://github.com/kuba--/zip.git
	GIT_TAG d7a2252a537926cbdef8512741a322a183fcfd09
)
FetchContent_MakeAvailable(zip)
