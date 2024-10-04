#include <iostream>

int sum(int a, int b);

int main() {
    int a=1;
    int b=2;
    int s;
    std::cout << "Hello World!" << std::endl;
    s = sum(a, b);
    std::cout << s << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a+b;
}