cmake_minimum_required(VERSION 3.28)

project(SC-Lyoko LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(SRC src/main.cpp
		src/Menu.cpp
		src/Scene.cpp
		src/Layout.cpp
		src/Button.cpp
		src/Base.cpp
		src/App.cpp)

add_executable(SC-Lyoko ${SRC})
