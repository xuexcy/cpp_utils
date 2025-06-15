#pragma once

#include <print>
#include <source_location>
#include <type_traits>
#include <utility>

#include "macro.h"

#define SAME_TYPE(a, b) static_assert(std::is_same_v<UNWRAP_PAREN(a), UNWRAP_PAREN(b)>)
#define CURRENT(method_name) std::source_location::current().method_name()
#define CURRENT_FUNCTION_NAME CURRENT(function_name)
#define PRINT_CURRENT_FUNCTION_NAME std::println("{}", CURRENT_FUNCTION_NAME)

namespace cpp_utils {

template <typename T>
constexpr auto type_name() {
  std::string_view name = CURRENT_FUNCTION_NAME;
  std::string_view prefix, suffix;
#ifdef __clang__
//  name = __PRETTY_FUNCTION__;
  prefix = "auto cpp_utils::type_name() [T = ";
  suffix = "]";
#elif defined(__GNUC__)
 // name = __PRETTY_FUNCTION__;
  prefix = "constexpr auto cpp_utils::type_name() [with T = ";
  suffix = "]";
#elif defined(_MSC_VER)
  //name = __FUNCSIG__;
  prefix = "auto __cdecl cpp_utils::type_name<";
  suffix = ">(void)";
#endif
  name.remove_prefix(prefix.size());
  name.remove_suffix(suffix.size());
  return name;
}

template <class T>
inline const T* object_end_address(const T* obj_ptr) {
    // void* end = (void*)(obj_ptr + 1);
    // void* end = (void*)((char*)obj_ptr + sizeof(*obj_ptr));
    return obj_ptr + 1;
}

}  // namespace utils


