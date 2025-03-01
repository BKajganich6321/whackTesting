#include "arithmetic.h"
#include <assert.h>
#include <stdio.h>

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    printf("test_add passed!\n");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-1, -1) == 0);
    printf("test_subtract passed!\n");
}

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-1, 5) == -5);
    printf("test_multiply passed!\n");
}

void test_divide() {
    assert(divide(6, 3) == 2.0);
    assert(divide(5, 2) == 2.5);
    printf("test_divide passed!\n");
}

int main(void) {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("All tests passed!\n");
    return 0;
}