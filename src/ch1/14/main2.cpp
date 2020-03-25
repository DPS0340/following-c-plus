#include <iostream>

using namespace std;

void doSomething(void) {
    #ifdef LIKE_APPLE
        cout << "Apple " << endl;
    #else
        cout << "Orange " << endl;
    #endif
}

int main(void) {
    doSomething();

    return 0;
}