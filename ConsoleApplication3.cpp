
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#pragma hdrstop
#include <cmath>
using  namespace std;

int main()
{   
    double x, y, z, a, е, c, g, t, n, f, b, e, k;
    cout << " \n x = "; cin >> x;
    cout << " \n y = "; cin >> y;
    cout << " \n z = "; cin >> z;
    
    if (x == 0) {
        cout << "\n x cannot be 0";
        cout << "\n ";
        return 1;
    }

    a = pow(abs(x), 1.0 / 3.0);
    t = pow(y, a);
    c = pow(cos(y), 3.0);
    k = pow((x + y), 1.0 / 2.0);
    g = (abs(x - y)) * (1 + ((pow(sin(z), 2))) / (pow((x + y), 1.0 / 2.0)));
    f = abs(x - y);
    n = exp(f);
    e = n + x / 2.0;
    b = t + ((c * g) / e);

    if (e == 0) {
        cout << "\n such a set of numbers is impossible";
        cout << "\n ";
        return 1;
    }


    if (k == 0) {
        cout << "\n such a set of numbers is impossible";
        cout << "\n ";
        return 1;
    }
   
    cout << "\n b = " << b << endl;

}


