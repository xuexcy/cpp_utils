set(ONLY_HEADERS
    util.h
)
add_library(cpp_utils INTERFACE)
target_include_directories(cpp_utils INTERFACE ${ONLY_HEADERS})
set_target_properties(cpp_utils PROPERTIES LINKER_LANGUAGE CXX)
