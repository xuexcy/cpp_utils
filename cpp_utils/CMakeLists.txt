set(ONLY_HEADERS
    util.h
)
add_library(util INTERFACE)
target_include_directories(util INTERFACE ${ONLY_HEADERS})
set_target_properties(util PROPERTIES LINKER_LANGUAGE CXX)
