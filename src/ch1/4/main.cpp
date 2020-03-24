#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main(void) {
    // 출력하기

    // std는 네임스페이스(이름공간)의 일종
    std::cout << "I love this lecture!" << std::endl;

    int x = 1024;
    double pi = 3.141592;

    std::cout << "x is " << x << " pi is " << pi << std::endl;
    // x is 1024 pi is 3.14159

    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "cdef" << std::endl;

    // using namespace std;
    // cout << "abc" << endl;

    std::cout << "\a"; // audio 소리 출력

    // 입력 받기

    int a = 1;

    std::cout << "Before your Input, a was " << a << "." << std::endl;

    std::cout << "please input a." << std::endl;

    std::cin >> a;

    std::cout << "a is " << a << "." << std::endl;

    return 0;
}