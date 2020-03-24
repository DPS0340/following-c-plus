#include <iostream>

// 이번 강좌의 주제

// 함수와의 첫만남

// 함수
// 리턴값
// 매개변수
// 인수

using namespace std;

void printHelloWorld(void) {
    cout << "Hello, World!" << endl;

    return;
}

int mulTwoNumbers(int num_a, int num_b) {
    int sum = num_a * num_b;

    return sum;
}

int main(void) {
    cout << 1 + 2 << endl;
    cout << 3 + 4 << endl;
    cout << 8 + 13 << endl;
    // 너무 번거롭다
    // 함수로 나타내자

    cout << mulTwoNumbers(1, 2) << endl;
    cout << mulTwoNumbers(3, 4) << endl;
    cout << mulTwoNumbers(8, 13) << endl;

    printHelloWorld();

    return 0;
}