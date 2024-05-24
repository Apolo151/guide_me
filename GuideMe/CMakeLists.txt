cmake_minimum_required(VERSION 3.5)
project(guide_me)
file(GLOB HEADERS "include/*.h")
file(GLOB SOURCES "src/*.cpp")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main ${SOURCES} ${HEADERS})
