# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /home/keti/KETI_BMC/KETI-APP/sysroots/x86_64-oesdk-linux/usr/bin/cmake

# The command to remove a file.
RM = /home/keti/KETI_BMC/KETI-APP/sysroots/x86_64-oesdk-linux/usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj

# Include any dependencies generated for this target.
include CMakeFiles/KETI-IBMC-hj.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/KETI-IBMC-hj.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/KETI-IBMC-hj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KETI-IBMC-hj.dir/flags.make

CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o: CMakeFiles/KETI-IBMC-hj.dir/flags.make
CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o: ibmc.cpp
CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o: CMakeFiles/KETI-IBMC-hj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o"
	/home/keti/BMC_SDK/output/host/usr/bin/arm-linux-g++ --sysroot=/home/keti/KETI_BMC/KETI-APP/sysroots/armv7ahf-vfpv4d16-openbmc-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o -MF CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o.d -o CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o -c /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/ibmc.cpp

CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.i"
	/home/keti/BMC_SDK/output/host/usr/bin/arm-linux-g++ --sysroot=/home/keti/KETI_BMC/KETI-APP/sysroots/armv7ahf-vfpv4d16-openbmc-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/ibmc.cpp > CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.i

CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.s"
	/home/keti/BMC_SDK/output/host/usr/bin/arm-linux-g++ --sysroot=/home/keti/KETI_BMC/KETI-APP/sysroots/armv7ahf-vfpv4d16-openbmc-linux-gnueabi $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/ibmc.cpp -o CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.s

# Object files for target KETI-IBMC-hj
KETI__IBMC__hj_OBJECTS = \
"CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o"

# External object files for target KETI-IBMC-hj
KETI__IBMC__hj_EXTERNAL_OBJECTS =

KETI-IBMC-hj: CMakeFiles/KETI-IBMC-hj.dir/ibmc.cpp.o
KETI-IBMC-hj: CMakeFiles/KETI-IBMC-hj.dir/build.make
KETI-IBMC-hj: CMakeFiles/KETI-IBMC-hj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KETI-IBMC-hj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KETI-IBMC-hj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KETI-IBMC-hj.dir/build: KETI-IBMC-hj
.PHONY : CMakeFiles/KETI-IBMC-hj.dir/build

CMakeFiles/KETI-IBMC-hj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/KETI-IBMC-hj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/KETI-IBMC-hj.dir/clean

CMakeFiles/KETI-IBMC-hj.dir/depend:
	cd /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj /home/keti/KETI_BMC/KETI-APP/hj/app/IBMC-APP/test/KETI-IBMC-hj/CMakeFiles/KETI-IBMC-hj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KETI-IBMC-hj.dir/depend
