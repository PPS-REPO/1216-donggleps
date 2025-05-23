#include "testlib.h"

int main() {
    registerValidation();

    int a = inf.readInt(1, 1000000000, "a");
    inf.readSpace();
    int b = inf.readInt(1, 1000000000, "b");
    inf.readSpace();
    int c = inf.readInt(1, 1000000000, "c");
    inf.readEoln();
    inf.readEof();

    return 0;
}
