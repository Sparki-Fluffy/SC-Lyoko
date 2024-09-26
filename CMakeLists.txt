cmake_minimum_required(VERSION 3.28)

set(PROJECT_NAME SC-Lyoko)

project(${PROJECT_NAME} LANGUAGES CXX)

set(SOURCE_LIB	src/App.cpp
				src/Base.cpp
				src/Button.cpp
				src/Layout.cpp
				src/Menu.cpp
				src/Scene.cpp)

set(SOURCE_EXE	src/main.cpp)

add_library(logics STATIC ${SOURCE_LIB})

include_directories(include)
include_directories(SFML)
include_directories(json/include)

add_executable(${PROJECT_NAME} ${SOURCE_EXE})

add_subdirectory(SFML)

target_link_libraries(${PROJECT_NAME} logics sfml-system sfml-graphics sfml-window)
