# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Es14_Creazione_Nodo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Es14_Creazione_Nodo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Es14_Creazione_Nodo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Es14_Creazione_Nodo.dir/flags.make

CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj: CMakeFiles/Es14_Creazione_Nodo.dir/flags.make
CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj: ../main.c
CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj: CMakeFiles/Es14_Creazione_Nodo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj -MF CMakeFiles\Es14_Creazione_Nodo.dir\main.c.obj.d -o CMakeFiles\Es14_Creazione_Nodo.dir\main.c.obj -c "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\main.c"

CMakeFiles/Es14_Creazione_Nodo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Es14_Creazione_Nodo.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\main.c" > CMakeFiles\Es14_Creazione_Nodo.dir\main.c.i

CMakeFiles/Es14_Creazione_Nodo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Es14_Creazione_Nodo.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\main.c" -o CMakeFiles\Es14_Creazione_Nodo.dir\main.c.s

# Object files for target Es14_Creazione_Nodo
Es14_Creazione_Nodo_OBJECTS = \
"CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj"

# External object files for target Es14_Creazione_Nodo
Es14_Creazione_Nodo_EXTERNAL_OBJECTS =

Es14_Creazione_Nodo.exe: CMakeFiles/Es14_Creazione_Nodo.dir/main.c.obj
Es14_Creazione_Nodo.exe: CMakeFiles/Es14_Creazione_Nodo.dir/build.make
Es14_Creazione_Nodo.exe: CMakeFiles/Es14_Creazione_Nodo.dir/linklibs.rsp
Es14_Creazione_Nodo.exe: CMakeFiles/Es14_Creazione_Nodo.dir/objects1.rsp
Es14_Creazione_Nodo.exe: CMakeFiles/Es14_Creazione_Nodo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Es14_Creazione_Nodo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Es14_Creazione_Nodo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Es14_Creazione_Nodo.dir/build: Es14_Creazione_Nodo.exe
.PHONY : CMakeFiles/Es14_Creazione_Nodo.dir/build

CMakeFiles/Es14_Creazione_Nodo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Es14_Creazione_Nodo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Es14_Creazione_Nodo.dir/clean

CMakeFiles/Es14_Creazione_Nodo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo" "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo" "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug" "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug" "C:\Users\p.cairo.2224\Documents\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es14-Creazione Nodo\cmake-build-debug\CMakeFiles\Es14_Creazione_Nodo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Es14_Creazione_Nodo.dir/depend

