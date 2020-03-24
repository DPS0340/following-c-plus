#include <iostream>

using namespace std;

// 이번 강좌의 주제
// 연산자와의 첫 만남

int main(void) {
    int x = 2; // x is a variable,  2 is a literal.

    cout << 1 + 2 << endl; // 1 + 2 is expression
    // 1, 2 is literal

    cout << x + 2 << endl; // binary operator

    cout << -x << endl; // unary operator

    cout << "Hello, World" << endl; // string is literal

    int y = (x > 0) ? 1 : 2; // 삼항 연산자
    // 조건 연산자

    cout << y << endl;

    return 0;
}