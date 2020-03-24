/*
 *  This is my program.
 *  Written by me.
 */
// 개별 라인에 별표는 굳이 선호하지는 않는다
// 그러나 사수가 하라면 해야된다
#include <iostream>

int main(void) {
    int x = 2;
    x = 5;
    int y = x + 3;

    // upper
    std::cout << y << std::endl; // on right
    // upper가 가독성이 좋다

    int sight = 10;

    // ...

    // 마법의 물약을 먹어서 시야 거리가 0
    sight = 0;

    // 1 + 1 event
    // int cost = num_items / 2 * price_per_item;

    return 0;
}

// block level comment
/*
int main(void) {
    int x = 2;
    x = 5;
    int y = x + 3;

    std::cout << y << std::endl;

    return 0;
}
*/

// one line comment
// int main(void) {
//     int x = 2;
//     x = 5;
//     int y = x + 3;

//     std::cout << y << std::endl;

//     return 0;
// }