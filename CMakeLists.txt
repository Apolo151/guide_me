project(guide_me)
cmake_minimum_required(VERSION 3.0)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(main.o ${SOURCES})