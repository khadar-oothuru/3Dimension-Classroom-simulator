# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CGM_ASSIGNMENT\freeglut-3.0.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CGM_ASSIGNMENT\freeglut-3.0.0

# Include any dependencies generated for this target.
include CMakeFiles/Fractals_static.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Fractals_static.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Fractals_static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fractals_static.dir/flags.make

CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj: CMakeFiles/Fractals_static.dir/flags.make
CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj: CMakeFiles/Fractals_static.dir/includes_C.rsp
CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj: progs/demos/Fractals/fractals.c
CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj: CMakeFiles/Fractals_static.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\CGM_ASSIGNMENT\freeglut-3.0.0\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj -MF CMakeFiles\Fractals_static.dir\progs\demos\Fractals\fractals.c.obj.d -o CMakeFiles\Fractals_static.dir\progs\demos\Fractals\fractals.c.obj -c D:\CGM_ASSIGNMENT\freeglut-3.0.0\progs\demos\Fractals\fractals.c

CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CGM_ASSIGNMENT\freeglut-3.0.0\progs\demos\Fractals\fractals.c > CMakeFiles\Fractals_static.dir\progs\demos\Fractals\fractals.c.i

CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CGM_ASSIGNMENT\freeglut-3.0.0\progs\demos\Fractals\fractals.c -o CMakeFiles\Fractals_static.dir\progs\demos\Fractals\fractals.c.s

# Object files for target Fractals_static
Fractals_static_OBJECTS = \
"CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj"

# External object files for target Fractals_static
Fractals_static_EXTERNAL_OBJECTS =

bin/Fractals_static.exe: CMakeFiles/Fractals_static.dir/progs/demos/Fractals/fractals.c.obj
bin/Fractals_static.exe: CMakeFiles/Fractals_static.dir/build.make
bin/Fractals_static.exe: lib/libfreeglut_static.a
bin/Fractals_static.exe: CMakeFiles/Fractals_static.dir/linkLibs.rsp
bin/Fractals_static.exe: CMakeFiles/Fractals_static.dir/objects1.rsp
bin/Fractals_static.exe: CMakeFiles/Fractals_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\CGM_ASSIGNMENT\freeglut-3.0.0\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bin\Fractals_static.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Fractals_static.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fractals_static.dir/build: bin/Fractals_static.exe
.PHONY : CMakeFiles/Fractals_static.dir/build

CMakeFiles/Fractals_static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Fractals_static.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Fractals_static.dir/clean

CMakeFiles/Fractals_static.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CGM_ASSIGNMENT\freeglut-3.0.0 D:\CGM_ASSIGNMENT\freeglut-3.0.0 D:\CGM_ASSIGNMENT\freeglut-3.0.0 D:\CGM_ASSIGNMENT\freeglut-3.0.0 D:\CGM_ASSIGNMENT\freeglut-3.0.0\CMakeFiles\Fractals_static.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Fractals_static.dir/depend
