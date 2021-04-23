#include <stdio.h>

#include "test.h"

char* say_hello() {
    return "Hello, World!";
}

int main() {
    int passed = 0, failed = 0;

    test("hello_pass", say_hello(), "Hello, World!") ? passed++ : failed++;
    test("hello_fail", say_hello(), "Unexpected Result") ? passed++ : failed++;

    printf("Tests Passed: %i\n", passed);
    printf("Tests Failed: %i\n", failed);
    return failed;
}