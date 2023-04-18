cmake_minimum_required(VERSION 3.22)
#cmake_minimum_required(VERSION 2.8)

 if ( WIN32 AND NOT CYGWIN AND NOT ( CMAKE_SYSTEM_NAME STREQUAL "WindowsStore" ) )
     set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /MT" CACHE STRING "")
     set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /MTd" CACHE STRING "")
     set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT" CACHE STRING "")
     set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd" CACHE STRING "")
 endif ()
 
 project(kcp)
 
 if ( IOS )
         set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fembed-bitcode")
         set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fembed-bitcode")
 endif ()
 
 find_path(KCP_PROJECT_DIR NAMES SConstruct
     PATHS 
     ${CMAKE_SOURCE_DIR}
     NO_DEFAULT_PATH
     )
 
message(${KCP_PROJECT_DIR})
 MARK_AS_ADVANCED(KCP_PROJECT_DIR)
 
 set ( KCP_CORE
     ikcp.c
 )
 
 
 if (APPLE)
     if (IOS)
         set(CMAKE_OSX_ARCHITECTURES "$(ARCHS_STANDARD)")
         add_library(kcp STATIC
            ${KCP_CORE}
         )
     else ()
         set(CMAKE_OSX_ARCHITECTURES "$(ARCHS_STANDARD_32_64_BIT)")
         add_library(kcp MODULE
             ${KCP_CORE}
         )
         set_target_properties ( kcp PROPERTIES BUNDLE TRUE )
         #set_target_properties ( kcp PROPERTIES FRAMEWORK TRUE )
         #set_target_properties ( kcp PROPERTIES MACOSX_RPATH TRUE )
     endif ()
 else ( )
     add_library(kcp SHARED
         ${KCP_CORE}
     )
 endif ( )
 
 if ( WIN32 AND NOT CYGWIN )
     target_compile_definitions (kcp PRIVATE DLL_EXPORTS)
 endif ( )
