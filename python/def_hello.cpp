#include <pybind11/pybind11.h>
#include <hello/hello.h>

namespace py = pybind11;


PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 hello plugin";
    m.def("say_hello",
        &hello::say_hello,
        "A function that says hello",
        py::arg("name"));
}