cmake_minimum_required(VERSION 3.0)
project(Game VERSION 1.0)

file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")
file(GLOB_RECURSE LIBRARIES "lib/*.lib")

include_directories(include)
add_executable(Program ${SOURCES} ${HEADERS})
target_link_libraries(Program Opengl32.lib ${LIBRARIES})
source_group(src FILES ${SOURCES})
source_group(include FILES ${HEADERS})