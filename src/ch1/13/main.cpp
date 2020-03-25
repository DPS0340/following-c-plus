#include <iostream>

// 이번 강의의 주제

// 네임스페이스

namespace MySpace1 {
    namespace InnerSpace {
        int my_function(void) {
            return 0;
        }
    }
    int doSomething(int a, int b) {
        return a + b;
    }
}

namespace MySpace2 {
    int doSomething(int a, int b) {
        return a * b;
    }
}

using namespace std;

int main(void) {
    using namespace MySpace1;

    doSomething(3, 4);

    MySpace1::InnerSpace::my_function();

    // cout << MySpace1::doSomething(3, 4) << endl;
    // cout << MySpace2::doSomething(3, 4) << endl;

    return 0;
}