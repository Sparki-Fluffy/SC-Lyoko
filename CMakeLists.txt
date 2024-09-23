cmake_minimum_required(VERSION 3.28)

project(SC-Lyoko LANGUAGES CXX)

set(SOURCE_LIB	src/App.cpp
				src/Base.cpp
				src/Button.cpp
				src/Container.cpp
				src/Layout.cpp
				src/Menu.cpp
				src/Scene.cpp
				src/ResourceManager.cpp)

set(SOURCE_EXE	src/main.cpp)

add_library(logics STATIC ${SOURCE_LIB})

include_directories(include)
include_directories(SFML)

add_executable(SC-Lyoko ${SOURCE_EXE})

add_subdirectory(SFML)

target_link_libraries(SC-Lyoko logics SFML)
