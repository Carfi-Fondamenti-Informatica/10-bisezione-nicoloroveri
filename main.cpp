#include <iostream>
#include "math.h"
using namespace std;
float a, b;
float x=0;
float err=0;


double f (double y) {
    y=pow(y,2)* cos(y)+1;
    return y;
}

int main() {
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }  while((f(a)*f(b))>=0);

    do {
        x = (a + b) / 2;

        if (f(x) == 0) {
            cout << x << endl;
        }

            if ((f(x) * f(b)) < 0) {
                a = x;
            } else {
                b = x;
            }
            err = abs((b - a) / 2);

    } while (err >= 1e-6);
    int f= x *10000;

   float s= (float)f/10000;
    cout<<s<<endl;

        return 0;

    }
