#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Enter number of rows and columns:" << endl;
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "X.";
        }
        cout << '\n';
    } 

    if(x != 0 && y != 0)
        cout << "Enter number of rows and columns:" << endl;

    // n++
    // }

    return 0;
}