# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Ahmed Kamal\Downloads\cmake-3.27.0-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Ahmed Kamal\Downloads\cmake-3.27.0-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build"

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/stack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/stack.cpp.obj: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack.cpp.obj: D:/Auto_Mechatronics/E-Mobility_Engineer/1-Programming\ Languages/cpp/CPP/Cpp_Projects/170\ problems/15_STL/stack.cpp
CMakeFiles/stack.dir/stack.cpp.obj: CMakeFiles/stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack.dir/stack.cpp.obj"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/stack.dir/stack.cpp.obj -MF CMakeFiles\stack.dir\stack.cpp.obj.d -o CMakeFiles\stack.dir\stack.cpp.obj -c "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\stack.cpp"

CMakeFiles/stack.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack.cpp.i"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\stack.cpp" > CMakeFiles\stack.dir\stack.cpp.i

CMakeFiles/stack.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack.cpp.s"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\stack.cpp" -o CMakeFiles\stack.dir\stack.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.cpp.obj"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack.exe: CMakeFiles/stack.dir/stack.cpp.obj
stack.exe: CMakeFiles/stack.dir/build.make
stack.exe: CMakeFiles/stack.dir/linkLibs.rsp
stack.exe: CMakeFiles/stack.dir/objects1.rsp
stack.exe: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack.exe
.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL" "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL" "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build" "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build" "D:\Auto_Mechatronics\E-Mobility_Engineer\1-Programming Languages\cpp\CPP\Cpp_Projects\170 problems\15_STL\build\CMakeFiles\stack.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/stack.dir/depend

