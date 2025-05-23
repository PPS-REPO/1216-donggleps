#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    const int MIN_VAL = 1;
    const long long MAX_VAL = 1000000000LL;

    bool canFormTriangle = rnd.next(0, 1);

    int a = rnd.next(MIN_VAL, (int)MAX_VAL);
    int b = rnd.next(MIN_VAL, (int)MAX_VAL);
    long long sum = (long long)a + (long long)b;

    int c;

    if (canFormTriangle) {
        // c < a+b
        int upperBound = (sum - 1 <= MAX_VAL) ? (int)(sum - 1) : (int)MAX_VAL;
        c = rnd.next(MIN_VAL, upperBound);
    } else {
        // c >= a+b or sum overflow
        if (sum > MAX_VAL) {
            c = rnd.next(MIN_VAL, (int)MAX_VAL);
        } else {
            c = rnd.next((int)sum, (int)MAX_VAL);
        }
    }

    cout << a << " " << b << " " << c << "\n";

    return 0;
}
