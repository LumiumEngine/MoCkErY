cmake_minimum_required(VERSION 3.10)

project(Mockery) # Mockery

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# create DMMRR.exe
add_executable(${PROJECT_NAME} "include/main.cpp")

# add clip
set(CLIP_DIR "${CMAKE_HOME_DIRECTORY}/external/clip")
set(CLIP_EXAMPLES OFF CACHE INTERNAL "Compile clip examples")
set(CLIP_TESTS OFF CACHE INTERNAL "Compile clip tests")
add_subdirectory(${CLIP_DIR})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_HOME_DIRECTORY}/external)
target_link_libraries(${PROJECT_NAME} PRIVATE clip)

set_target_properties(${PROJECT_NAME} PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin"
)