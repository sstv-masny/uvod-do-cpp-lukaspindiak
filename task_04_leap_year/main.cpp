#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Zadaj rok" << endl;
    cin >> year;
    cout << "in: " << year << endl;

    if ((year / 400 == 0) || (year / 4 == 0 && year / 100 != 0))
        cout << "out: YES";
    else
        cout << "out: NO";

    return 0;
}
