# set the plugin name here
set(PLUGIN_NAME "WordCompletion")

# Our project is called 'plugin' this is how it will be called in visual studio, and in our makefiles.
project(${PLUGIN_NAME})

# It was noticed that when using MinGW gcc it is essential that 'core' is mentioned before 'base'.

# wxWidgets include (this will do all the magic to configure everything)
include("${wxWidgets_USE_FILE}")

if(USE_PCH AND NOT MINGW)
    add_definitions(-include "${CL_PCH_FILE}")
    add_definitions(-Winvalid-pch)
endif()

flex_target(WordFlex "WordTokenizer.l" "${CMAKE_CURRENT_BINARY_DIR}/WordTokenizer.cpp"
            COMPILE_FLAGS "-Pword --noline --yylineno --batch")

set(FlexSrcs "${FLEX_WordFlex_OUTPUTS}")

file(GLOB SRCS "*.cpp")

# Define the output
add_library(${PLUGIN_NAME} SHARED ${SRCS} ${FlexSrcs})

if(UNIX OR APPLE)
    set_target_properties(${PLUGIN_NAME} PROPERTIES POSITION_INDEPENDENT_CODE ON)
endif()

if(USE_PCH)
    target_precompile_headers(${PLUGIN_NAME} REUSE_FROM PCH)
endif()

target_include_directories(${PLUGIN_NAME} PRIVATE .)

# Remove the "lib" prefix from the plugin name
set_target_properties(${PLUGIN_NAME} PROPERTIES PREFIX "")
target_link_libraries(${PLUGIN_NAME} ${LINKER_OPTIONS} libcodelite plugin)
cl_install_plugin(${PLUGIN_NAME})
