#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    const int MIN_VAL = 1;
    const int MAX_VAL = 1000000000;

    bool canFormTriangle = rnd.next(0, 1);

    int a = rnd.next(MIN_VAL, MAX_VAL);
    int b = rnd.next(MIN_VAL, MAX_VAL);
    int c;

    long long sum = (long long)a + (long long)b;

    if (canFormTriangle) {
        int upperBound = (sum - 1 <= MAX_VAL) ? (int)(sum - 1) : MAX_VAL;
        c = rnd.next(MIN_VAL, upperBound);
    } else {
        if (sum > MAX_VAL) {
            c = rnd.next(MIN_VAL, MAX_VAL);
        } else {
            // c >= a+b
            c = rnd.next((int)sum, MAX_VAL);
        }
    }

    cout << a << " " << b << " " << c << "\n";

    return 0;
}
