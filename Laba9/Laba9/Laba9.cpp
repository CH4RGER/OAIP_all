#include <iostream>
    #include <math.h>
    #include <stdlib.h>
    using namespace std;

    const double eps = 0.01;
    double a, b, t, x, y, t1, s;

    double func(double a, double b, double e)
    {
        s = (a + b) / 2 ;
        t1 = 7 * sin(2*s + e) ;
        return t1;
    }

    void JustDoIt(double &a,double &b)
    {
                t = (a + b) / 2.0;
                y = func(a, b,   - eps);
                x = func(a, b,  eps);
                if (y >= x)    a = t;
                else   b = t;
                // чек-блок 
                     cout << "t= " << t <<"\n";
                     cout << "a= " << a <<" b=" << b <<"\n";
                     cout << "x= " << x <<" y=" << y <<"\n";
                     cout << "fabs(b - a)= " <<  fabs(b - a) <<"\n";
                // 
               if ( fabs(b - a) < eps) return;
                JustDoIt( a, b);
    }

    int main()
    {
       a = 2;
       b = 6;
       JustDoIt( a, b);
       cout << "Otvet: " << func(a, b,0)<<"\n";
        return 0;
    }