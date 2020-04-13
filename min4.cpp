#include <iostream>
#include <cstdlib>
using namespace std;

int min2(int num1, int num2);
int min3(int num1, int num2, int num3);
int min4(int num1, int num2, int num3, int num4);

int main(int argc, char *argv[]) {

    if (argc != 5) {
        cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
        cerr << " Prints smallest of the four numbers" << endl;
        exit(1);
    }

    int a =atoi(argv[1]);
    int b =atoi(argv[2]);
    int c =atoi(argv[3]);
    int d =atoi(argv[4]);

    cout << min4(a,b,c,d) << endl;

    return 0;
}

int min2(int num1, int num2) {
    if (num1 < num2)
        return num1;
    return num2;
}

int min3(int num1, int num2, int num3) {
    return min2(num1, min2(num2, num3));
}

int min4(int num1, int num2, int num3, int num4) {
    return min2(num1, min3(num2, num3, num4));
}
