/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 12, 2018, 7:38 PM
 */

#include <iostream>

using namespace std;

#pragma pack(1) // disables padding, so less space is used for class A
// but you can get big penalty

struct A {
    char a;
    char b;
    int i;
    char c;

    /* a|b|-|-|i|i|i|i|c|-|-|-|*/ /*4 bytes at a time


    char d;
    char e;
    char f;
    int j;

    /* d|e|f|-|j|j|j|j| */ /* 4 bytes at a time */
};

int main(int argc, char** argv) {

    std::cout << sizeof (A) << '\n';

    return 0;
}

