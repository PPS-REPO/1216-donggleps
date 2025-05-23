#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerChecker(argc, argv);

    int a = inf.readInt(1, 1000000000);
    int b = inf.readInt(1, 1000000000);
    int c = inf.readInt(1, 1000000000);
    inf.readEoln();
    inf.readEof();

    // string ans = ansf.readLine();

    string ouf_line = ouf.readLine();

    if (!ouf.eof()) {
        quitf(_wa, "Extra output detected");
    }

    bool canForm = ( (long long)a + b > c ) && ( (long long)a + c > b ) && ( (long long)b + c > a );

    string correct = canForm ? "YESAMGHAKHYUNG" : "NOSAMGAKHYUK";

    if (ouf_line != correct) {
        quitf(_wa, "Expected \"%s\", but found \"%s\"", correct.c_str(), ouf_line.c_str());
    }

    quitf(_ok, "Correct output");
}
