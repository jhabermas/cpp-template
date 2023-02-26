# cpp-template

C++, CMake and conan repository template with library, app and tests

## Building

From virtual env:

```bash
pip install conan
conan profile detect
conan install . --output-folder=build --build=missing
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .
```
