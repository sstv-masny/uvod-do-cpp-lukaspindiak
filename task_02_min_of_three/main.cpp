
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "in: " << a << ", " << b << ", " << c << endl;
    if (a < b && a < c) {
        cout << "out: " << a << endl;
    } else if (b < a && b < c) {
        cout << "out: " << b << endl;
    } else {
        cout << "out: " << c << endl;
    }
    return 0;
}
