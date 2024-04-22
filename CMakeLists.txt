project(guide_me)
cmake_minimum_required(VERSION 3.0)

file(GLOB HEADERS "include/*.h")
file(GLOB SOURCES "src/*.cpp")
add_executable(main ${SOURCES} ${HEADERS})