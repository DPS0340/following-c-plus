#include <iostream>
#include <algorithm>

using namespace std;

// 이번 강의의 주제

// 전처리기와의 만남

#define MY_NUMBER 333
// 변수를 매크로로 하드코딩
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
// 간단한 함수를 매크로로 하드코딩
// 요즘은 컴퓨터가 달라져서 쓰는게 지양된다

#define LIKE_APPLE
// 이 파일 안에서만 적용

void doSomething(void) {
    #ifdef LIKE_APPLE
        cout << "Apple " << endl;
    #else
        cout << "Orange " << endl;
    #endif
}

int main(void) {
    cout << MY_NUMBER << endl;

    cout << MAX(1, 2) << endl; 

    // max 구현
    cout << std::max(1, 3) << endl;

    return 0;
}