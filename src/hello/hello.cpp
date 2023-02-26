#include "hello/hello.h"
#include <fmt/format.h>

std::string hello::say_hello(std::string_view name)
{
    return fmt::format("Hello {}", name);
}