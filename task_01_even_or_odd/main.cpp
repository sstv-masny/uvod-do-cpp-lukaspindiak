
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Zadaj cislo " << endl;
    cin >> n;
    cout << "in: " << n << endl;

    if (n % 2 == 0) {
        cout << "out: even" << endl;
    }

    else {
        cout << "out: odd" << endl;
    }

    return 0;
}
