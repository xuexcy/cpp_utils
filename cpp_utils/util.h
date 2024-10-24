#pragma once

#include <source_location>

namespace cpp_utils {

#define CURRENT(method_name) std::source_location::current().method_name()
#define CURRENT_FUNCTION_NAME CURRENT(function_name)

}  // namespace utils


