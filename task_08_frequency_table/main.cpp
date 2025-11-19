#include <iostream>
#include <string>
using namespace std;

int main() {

    int n[101] = {};

    n[1] += 1;
    n[2] += 1;
    n[2] += 1;
    n[100] += 1;
    n[0] += 1;

    for (int pocet : n) 
    {
        cout << pocet << " ";
    }
    
}

//  int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//
//    for (int i = 0; i < 11; i++) {
//        cout << number[i] << '\n';
//    }
