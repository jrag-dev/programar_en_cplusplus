cmake_minimum_required(VERSION 3.10)

project(SimuladorFisico VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

add_executable(MiSimulacion main.cpp planeta.cpp)

target_include_directories(MiSimulacion PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})