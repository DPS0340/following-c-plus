#include <iostream>

using namespace std;

// 이번 강좌의 주제

// 기본적인 서식 맞추기
// formatting

int add(int x, int y) {
    return x + y; // 탭 대신 스페이스 네개
}

int main(void) {
    cout << "Hello, World" << "abcedf " <<
         "Hello Home " << endl;


    // 컴파일러가 공백이나 빈 줄은 무시한다
    // 소스 코드의 가독성을 높이기 위해서이다

    int my_v         = 1;
    int x            = 4;
    int num_apples   = 123;
    // 하드코딩 방식

    // this is important
    x = 1 + 2;

    // this is important, too
    int y = 3 + 4;
}