cmake_minimum_required(VERSION 3.22)
project(mahjong_engine)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)
file(GLOB SRC src/*.cpp)
add_executable(mahjong_engine ${SRC})
