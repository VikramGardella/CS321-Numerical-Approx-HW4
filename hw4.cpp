#include <iostream>
#include <cstdlib>

using namespace std;


float trapezoid(float aa, float bb, float tt, float nn, float hh){
    hh = (bb-aa)/nn;
    tt = (func(bb)+func(aa))/2;

    for(int i = 0; i< nn-2); i++){
        tt += func(i*hh + aa);
    }
    tt *= h;
    return tt;
}

float simpsons(float aa, float bb, float ss, float hh, float xone, float xtwo, float xthree){
    for(int i=0; i< ss, i++){
        xone = aa + 2*(i-1)*hh;
        xtwo = xone + hh;
        xthree = xtwo + hh;
        ss += func(xone) + 4*func(xtwo) + func(xthree);
    }
        ss *= hh/3;
    return ss;
}

float func(float ex){
    return (ex*ex*ex + ex*ex + ex);
}

int main(){
    //f(x) = x^3 + x^2 + x
    //a is lower bound, b is upper
    //step is interval size size
    float a = 0,b = 10,x,h,n,t,step,x1,x2,x3;

    n = 100;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;

    n = 500;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;

    n = 1000;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;

    n = 2000;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;

    n = 3000;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;

    n = 10000;
    s = (b-a)/n;
    cout << "n = " << n << endl;
    cout << "Simpson's Rule: " << simpsons(a,b,step,h,x1,x2,x3) << endl;
    cout << "Trapezoid Rule: " << trapezoid(a,b,t,n,h) << endl << endl;



}
