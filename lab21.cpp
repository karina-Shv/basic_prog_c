#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main (){
    int n;
    double y;

    cout<<"Input number\n"; cin >> n; 
    if (n<=0){
        cout << "The number must be a natural number (n > 0)";
        return 1;
    }else{
        for (int i=n; i>=1; i-=1){
            y = sqrt(3*i+y);
        }
    }
        
    cout << "Розрахунок: " << y << '\n';
    return 0;
}
