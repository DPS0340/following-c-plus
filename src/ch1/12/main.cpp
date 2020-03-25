#include <iostream>
#include "add.h"

using namespace std;

// 이번 강의의 주제

// 헤더 가드의 이유 

int main(void) {
    cout << add(1, 2) << endl;

    return 0;
}

// gcc에서 main.cpp만 컴파일 시 undefined reference to `add(int, int)'
// 해결 방안: g++ main.cpp add.cpp -g -Wall -W
// 같이 컴파일한다.