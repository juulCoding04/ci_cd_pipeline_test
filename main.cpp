#include <iostream>

int sum(int a, int b);
int sub(int a, int b);

int main() {
    int a=1;
    int b=2;
    int s;
    int min;
    std::cout << "Hello World!" << std::endl;
    s = sum(a, b);
    min = sub(a, b);
    std::cout << s << std::endl;
    std::cout << min << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return b-a;
}