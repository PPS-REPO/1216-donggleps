#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a)
        cout << "YESAMGHAKHYUNG";
    else
        cout << "NOSAMGAKHYUK";
}
