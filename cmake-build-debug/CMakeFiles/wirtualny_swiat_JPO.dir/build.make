# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\wirtualny_swiat_JPO.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\wirtualny_swiat_JPO.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\wirtualny_swiat_JPO.dir\flags.make

CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.obj: CMakeFiles\wirtualny_swiat_JPO.dir\flags.make
CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wirtualny_swiat_JPO.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\ENTERP~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.obj /FdCMakeFiles\wirtualny_swiat_JPO.dir\ /FS -c C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\main.cpp
<<

CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wirtualny_swiat_JPO.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\ENTERP~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\main.cpp
<<

CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wirtualny_swiat_JPO.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\ENTERP~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.s /c C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\main.cpp
<<

# Object files for target wirtualny_swiat_JPO
wirtualny_swiat_JPO_OBJECTS = \
"CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.obj"

# External object files for target wirtualny_swiat_JPO
wirtualny_swiat_JPO_EXTERNAL_OBJECTS =

wirtualny_swiat_JPO.exe: CMakeFiles\wirtualny_swiat_JPO.dir\main.cpp.obj
wirtualny_swiat_JPO.exe: CMakeFiles\wirtualny_swiat_JPO.dir\build.make
wirtualny_swiat_JPO.exe: CMakeFiles\wirtualny_swiat_JPO.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wirtualny_swiat_JPO.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\wirtualny_swiat_JPO.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\ENTERP~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\wirtualny_swiat_JPO.dir\objects1.rsp @<<
 /out:wirtualny_swiat_JPO.exe /implib:wirtualny_swiat_JPO.lib /pdb:C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug\wirtualny_swiat_JPO.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\wirtualny_swiat_JPO.dir\build: wirtualny_swiat_JPO.exe

.PHONY : CMakeFiles\wirtualny_swiat_JPO.dir\build

CMakeFiles\wirtualny_swiat_JPO.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\wirtualny_swiat_JPO.dir\cmake_clean.cmake
.PHONY : CMakeFiles\wirtualny_swiat_JPO.dir\clean

CMakeFiles\wirtualny_swiat_JPO.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug C:\Users\abiel\CLionProjects\wirtualny_swiat_JPO\cmake-build-debug\CMakeFiles\wirtualny_swiat_JPO.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\wirtualny_swiat_JPO.dir\depend

