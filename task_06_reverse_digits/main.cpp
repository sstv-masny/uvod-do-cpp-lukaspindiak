
#include <iostream>
using namespace std;
int main() {
    int n, cis = 0;
    cout << "Zadaj cislo" << endl;
    cin >> n;

    do {
        cis = cis * 10 + n % 10;
        n /= 10;
    } while (n > 0);

    cout << cis;
}
