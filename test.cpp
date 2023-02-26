#include<stdio.h>
#include<iostream>

int main() {
    while (true) {
        int a;
        std::cin >> a;
        if (a==42) break;
        std::cout << a << std::endl;
    };
    return 0;
}