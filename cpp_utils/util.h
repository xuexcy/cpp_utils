#pragma once

#include <print>
#include <source_location>
#include <type_traits>
#include <utility>

namespace cpp_utils {
#define SAME_TYPE(a, b) static_assert(std::is_same_v<a, b>)

#define CURRENT(method_name) std::source_location::current().method_name()
#define CURRENT_FUNCTION_NAME CURRENT(function_name)
#define PRINT_CURRENT_FUNCTION_NAME std::println("{}", CURRENT_FUNCTION_NAME)

template <class T>
inline const T* object_end_address(const T* obj_ptr) {
    // void* end = (void*)(obj_ptr + 1);
    // void* end = (void*)((char*)obj_ptr + sizeof(*obj_ptr));
    return obj_ptr + 1;
}

}  // namespace utils


