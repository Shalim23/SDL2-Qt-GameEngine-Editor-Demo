cmake_minimum_required(VERSION 3.30)

project(SDL2-Qt-GameEngine-Editor-Demo)

include(${CMAKE_CURRENT_SOURCE_DIR}/SDL2-Qt-GameEngine-Editor/CMakeConfig/Config.cmake)

add_subdirectory(SDL2-Qt-GameEngine-Editor)

file(GLOB_RECURSE src_files "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp")

add_executable(${PROJECT_NAME} ${src_files})

target_link_libraries(${PROJECT_NAME} PRIVATE SDL2-Qt-GameEngine-Editor)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${src_files})
