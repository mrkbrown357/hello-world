install(TARGETS hello DESTINATION bin)
Finally, the actual hello.cpp file:
#include <iostream>
int main() {
std::cout << "Hello World!" << std::endl;
return 0;
}
