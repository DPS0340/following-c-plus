#include <iostream>

// 이번 강좌의 주제

// 지역 범위
// local scope

using namespace std;

int main(void) {

    int x(0); // x = 0;

    {
        // 이게 뭐지???
        // 중괄호 블록
        // 영역 분리 기능
        int x = 1;
    }

    {
        // 여기에서도 할 수 있다
        // 다른 메모리의 식별자
        int x = 2;
    }

    // int x = 1;
    // 'x': redifiniton; multiple initialization

    // 두 변수의 주소값 비교
    cout << x << " " << &x << endl;
    {
        int x = 0;
        cout << x << " " << &x << endl;
    }
    cout << x << " " << &x << endl;

    return 0;
}