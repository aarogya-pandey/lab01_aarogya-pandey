#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int d = 0;
    while(d<8){

        int n;
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
        cin >> n;
        
        double pi = 1.0;

        if(n<=-1) {
            exit(1);
        }

        for (int i = 1; i<=n; i++) {
            pi += (pow(-1,i))/((2*static_cast<double>(i))+1);
        }
        pi = pi * 4;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);

        if(n==0) {
            cout << "The approximate value of pi using " << n+1 << " term is: " << pi << endl;
        }
        else {
            cout << "The approximate value of pi using " << n+1 << " terms is: " << pi << endl;
        }
        d++;
        }

        return 0;
}