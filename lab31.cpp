#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>

using namespace std;

double calc_pi (int n){
    double pi=0.0;
    for (int i=0; i<n; i++){
        pi += (i % 2 == 0 ? 1.0 : -1.0)/(2*i+1);
    }
    return pi*4;
}

double calc_e (int n2){
    double e = 1.0;
    double fact = 1.0;
    for (int i=1; i<n2; ++i){
        fact *=i;
        e+=1.0/fact;
    }
    return e;
}

int main (){
    double n = 0;
    double n2 = 0;

    cout<<"Input terms pi: \n"; cin >> n;
    cout<<"Input terms e: \n";  cin >> n2;

    double pi = calc_pi(n);
    double e = calc_e(n2);

    double chus = sin(e/3)+cos(2*pi/5);
    double znum = tan(e/3)-sin(pi/4);
    double y = chus/znum;
       
    cout << "Обчислене значення pi: " << pi << '\n';
    cout << "Обчислене значення e: " << e << '\n';
    cout << "Значення виразу y: " << y << '\n';

    double true_pi = M_PI;
    double true_e = exp(1);
    double true_y = (sin(true_e/3)+cos(2*true_pi/5))/(tan(true_e/3)-sin(true_pi/4));

    cout << "Точне значення y: " << true_y << '\n';
    cout << "Похибка: " << abs(y - true_y) << '\n';

    return 0;
}
