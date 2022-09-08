
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#pragma hdrstop
#include <cmath>
using  namespace std;

int main()
{
    double x, y, z, a, b, c, g, t, q;
    cout << " \n x = "; cin >> x;
    cout << " \n y = "; cin >> y;
    cout << " \n z = "; cin >> z;


    if (x > 1 or x < -1) {
        
        cout << "\n x cannot be more than 1 or less than -1";
        cout << "\n ";
        return 1;
    }

    q = (abs(x-y)*z) + x*x;

    if (q == 0) {
        cout << "\n such a set of numbers isn't possible";
        cout << "\n ";
            return 1;
    }

    a = 5 * atan(x);
    b = 0.25 * acos(x);
    c = (x + (3 * abs(x - y)) + (x * x));
    g = (abs(x-y)*z) + (x*x);
    t =a-(b*c/g);
    cout << "\n t = " << t << endl;
    
}


