#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main() {
    char test[21];
    strcpy(test, "Title text for bar");
    for (int i = strlen(test) + 1;i < 21;i++) {
        strcat(test, ".");
    }
    cout << test;
}