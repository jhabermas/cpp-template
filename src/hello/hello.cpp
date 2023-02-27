#include "hello/hello.h"
#include <fmt/format.h>

#include <iostream>

std::string hello::say_hello(std::string_view name)
{
    std::string a = "asdf";
    std::string b = std::move(a);
    std::cout << a << b;

    return fmt::format("Hello {}", name);
}