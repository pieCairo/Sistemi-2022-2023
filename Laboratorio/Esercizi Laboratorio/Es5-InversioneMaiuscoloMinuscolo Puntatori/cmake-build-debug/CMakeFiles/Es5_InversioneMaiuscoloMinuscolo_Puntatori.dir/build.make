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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/flags.make

CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/flags.make
CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj: ../main.c
CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj -MF CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\main.c.obj.d -o CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\main.c.obj -c "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\main.c"

CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\main.c" > CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\main.c.i

CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\main.c" -o CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\main.c.s

# Object files for target Es5_InversioneMaiuscoloMinuscolo_Puntatori
Es5_InversioneMaiuscoloMinuscolo_Puntatori_OBJECTS = \
"CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj"

# External object files for target Es5_InversioneMaiuscoloMinuscolo_Puntatori
Es5_InversioneMaiuscoloMinuscolo_Puntatori_EXTERNAL_OBJECTS =

Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/main.c.obj
Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/build.make
Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/linklibs.rsp
Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/objects1.rsp
Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe: CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/build: Es5_InversioneMaiuscoloMinuscolo_Puntatori.exe
.PHONY : CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/build

CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/clean

CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori" "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori" "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug" "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug" "C:\Users\pietr\OneDrive\Documenti\GitHub\Sistemi_2022-2023\Laboratorio\Esercizi Laboratorio\Es5-InversioneMaiuscoloMinuscolo Puntatori\cmake-build-debug\CMakeFiles\Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Es5_InversioneMaiuscoloMinuscolo_Puntatori.dir/depend

