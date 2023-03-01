find_package(pybind11 REQUIRED)

pybind11_add_module(cpp_hello def_hello.cpp)

target_link_libraries(cpp_hello PRIVATE hello)

target_include_directories(cpp_hello PRIVATE ${CMAKE_SOURCE_DIR}/include)