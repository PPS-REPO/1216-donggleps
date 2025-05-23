#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (a + c > c && a + c > b && b + c > a)
        cout << "YESAMGHAKHYUNG" << endl;
    else
        cout << "NOSAMGAKHYUK" << endl;
}
