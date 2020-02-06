project(hello)
cmake_minimum_required(VERSION 2.8)
add_executable(hello hello.cpp)
install(TARGETS hello DESTINATION bin)
Finally, the actual hello.cpp file:
#include <iostream>
int main() {
std::cout << "Hello World!" << std::endl;
return 0;
}
