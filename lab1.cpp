#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;
int main(){
    double x;
    double y;
    double a = 2.8;
    double b = -0.35;
    cout<<"Input x\n"; cin >> x;
    if (x < 2.5){
        y = (a+b) / (exp(x) + cos(x));
    } else if (x >= 2.5 && x < 6){
        y = (a+b) / (x+2);
    } else{
        y = exp(x) + sin(x);
    }
    cout << "x=" << x << "    " << "y=" << y << '\n';
    return 0;
}