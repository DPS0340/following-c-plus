#include <iostream>

using namespace std;

// 이번 강의의 주제

// 선언과         정의의 분리
// Declaration   Definition

int add(int a, int b); // forward declaration
int multiply(int a, int b);
int subtract(int a, int b);

// main이 밑으로 감
int main(void) {
    cout << add(1, 2) << endl;
    cout << subtract(1, 2) << endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}