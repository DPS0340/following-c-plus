#include <iostream>

// 이번 강좌의 주제

// 키워드와 식별자 이름짓기

void getNumber() { // 동사 + 명사 네이밍
    
}

class MyClass { // class 멤버 변수
    public:
        int variable;
};

int main(void) {
    // int 3three; // 숫자로 시작되지 않음
    int num_apples, num_oranges;
    int n_apples, n_oranges;
    // _ <- 언더스코어 or 언더바
    // 변수명에는 띄어쓰기 불가
    // 짧으면 좋다
    // 나중에 이해되는게 제일 좋다

    int VALUE;
    // 이런 형태는 매크로로 자주 쓴다

    int VaLuE;
    // 이런 형태는 좋지 않다
    // 그래도 자동완성이 도와준다

    int _apples;
    // 언더바를 붙일 수 있다

    return 0;
}