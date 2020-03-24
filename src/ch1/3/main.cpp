#include <iostream>

// 이번 강좌의 주제

// 객체와 변수
// l-values와 r-values
// 초기화와 대입
// 초기화를 안 했을 때의 문제점


int main(void) {
    // int 타입은 integer: 정수의 약자
    // int 변수 x를 5로 초기화(initialize)
    int x = 5;

    // x에 123 대입(assignment)
    x = 123;
    // 등호?
    // 같다는 의미가 아니다!
    // x에 123을 저장한다.

    std::cout << x << std::endl;

    // &: ampersand 연산자
    // 주소 츌력
    std::cout << &x << std::endl;

    // l-value와 r-value

    x = 123;

    // x: l-value
    // 123: r-value

    // 주소를 갖고 있는 것이면: l-value
    // 주소를 갖고 있지 않는 것이면: r-value

    // 한 가지 더

    x = x + 2;

    // x + 2 는 l-value인가?

    // 아니다

    // RHS의 x는 값 123으로 치환됨
    // 즉 RHS는 값 125: r-value

    // 살짝 헷갈릴 수 있지만
    // 메모리에 대해 잘 알게 되면 왜 그런지 한꺼번에 알 수 있을 것

    // Visual Studio의 Release / Debug 모드
    // Debug 모드: 디버그에 필요한 정보가 많음
    // Release 모드: 속도가 빠르고 실행파일이 작음


    // x에 초기화를 하지 않으면
    // Runtime Error 발생

    // int x(123); // assignment 이렇게도 가능하다

    // int x;

    // release 모드 컴파일
    // 컴파일러에 의해 x에 0 대입됨
    // 컴파일러 호환성 없는 행동
    // 디버깅 시간을 잡아먹을 수 있음

    return 0;
}