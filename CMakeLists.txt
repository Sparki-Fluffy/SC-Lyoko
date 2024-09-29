cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME SC-Lyoko)

project(${PROJECT_NAME} LANGUAGES CXX)

set(SOURCE_EXE	src/main.cpp
				src/App.cpp
				src/Base.cpp
				src/Button.cpp
				src/Layout.cpp
				src/Menu.cpp
				src/Scene.cpp)

include_directories(include)
include_directories(SFML)
include_directories(json/include)

add_executable(${PROJECT_NAME} ${SOURCE_EXE})

add_subdirectory(SFML)

target_link_libraries(${PROJECT_NAME} sfml-system sfml-graphics sfml-window)
