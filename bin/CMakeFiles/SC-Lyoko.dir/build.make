# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sparky/Documents/Проекты/SC-Lyoko

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sparky/Documents/Проекты/SC-Lyoko/bin

# Include any dependencies generated for this target.
include CMakeFiles/SC-Lyoko.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SC-Lyoko.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SC-Lyoko.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SC-Lyoko.dir/flags.make

CMakeFiles/SC-Lyoko.dir/src/main.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/main.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/main.cpp
CMakeFiles/SC-Lyoko.dir/src/main.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/main.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/main.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/main.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/main.cpp

CMakeFiles/SC-Lyoko.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/main.cpp > CMakeFiles/SC-Lyoko.dir/src/main.cpp.i

CMakeFiles/SC-Lyoko.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/main.cpp -o CMakeFiles/SC-Lyoko.dir/src/main.cpp.s

CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/Menu.cpp
CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/Menu.cpp

CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/Menu.cpp > CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.i

CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/Menu.cpp -o CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.s

CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/Scene.cpp
CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/Scene.cpp

CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/Scene.cpp > CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.i

CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/Scene.cpp -o CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.s

CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/Layout.cpp
CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/Layout.cpp

CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/Layout.cpp > CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.i

CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/Layout.cpp -o CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.s

CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/Button.cpp
CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/Button.cpp

CMakeFiles/SC-Lyoko.dir/src/Button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/Button.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/Button.cpp > CMakeFiles/SC-Lyoko.dir/src/Button.cpp.i

CMakeFiles/SC-Lyoko.dir/src/Button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/Button.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/Button.cpp -o CMakeFiles/SC-Lyoko.dir/src/Button.cpp.s

CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/Base.cpp
CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/Base.cpp

CMakeFiles/SC-Lyoko.dir/src/Base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/Base.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/Base.cpp > CMakeFiles/SC-Lyoko.dir/src/Base.cpp.i

CMakeFiles/SC-Lyoko.dir/src/Base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/Base.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/Base.cpp -o CMakeFiles/SC-Lyoko.dir/src/Base.cpp.s

CMakeFiles/SC-Lyoko.dir/src/App.cpp.o: CMakeFiles/SC-Lyoko.dir/flags.make
CMakeFiles/SC-Lyoko.dir/src/App.cpp.o: /home/sparky/Documents/Проекты/SC-Lyoko/src/App.cpp
CMakeFiles/SC-Lyoko.dir/src/App.cpp.o: CMakeFiles/SC-Lyoko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SC-Lyoko.dir/src/App.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SC-Lyoko.dir/src/App.cpp.o -MF CMakeFiles/SC-Lyoko.dir/src/App.cpp.o.d -o CMakeFiles/SC-Lyoko.dir/src/App.cpp.o -c /home/sparky/Documents/Проекты/SC-Lyoko/src/App.cpp

CMakeFiles/SC-Lyoko.dir/src/App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SC-Lyoko.dir/src/App.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sparky/Documents/Проекты/SC-Lyoko/src/App.cpp > CMakeFiles/SC-Lyoko.dir/src/App.cpp.i

CMakeFiles/SC-Lyoko.dir/src/App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SC-Lyoko.dir/src/App.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sparky/Documents/Проекты/SC-Lyoko/src/App.cpp -o CMakeFiles/SC-Lyoko.dir/src/App.cpp.s

# Object files for target SC-Lyoko
SC__Lyoko_OBJECTS = \
"CMakeFiles/SC-Lyoko.dir/src/main.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o" \
"CMakeFiles/SC-Lyoko.dir/src/App.cpp.o"

# External object files for target SC-Lyoko
SC__Lyoko_EXTERNAL_OBJECTS =

SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/main.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/Menu.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/Scene.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/Layout.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/Button.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/Base.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/src/App.cpp.o
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/build.make
SC-Lyoko: CMakeFiles/SC-Lyoko.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable SC-Lyoko"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SC-Lyoko.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SC-Lyoko.dir/build: SC-Lyoko
.PHONY : CMakeFiles/SC-Lyoko.dir/build

CMakeFiles/SC-Lyoko.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SC-Lyoko.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SC-Lyoko.dir/clean

CMakeFiles/SC-Lyoko.dir/depend:
	cd /home/sparky/Documents/Проекты/SC-Lyoko/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sparky/Documents/Проекты/SC-Lyoko /home/sparky/Documents/Проекты/SC-Lyoko /home/sparky/Documents/Проекты/SC-Lyoko/bin /home/sparky/Documents/Проекты/SC-Lyoko/bin /home/sparky/Documents/Проекты/SC-Lyoko/bin/CMakeFiles/SC-Lyoko.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SC-Lyoko.dir/depend

