#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main (){
    double num[9];
    int neg = 0;
    double y = 1;

    cout<<"Input 9 numbers: \n"; 
    for (int i=0; i<9; i++){
        cin >> num[i];
    }

    for (int i=0; i<9; i++){
        if (num[i]>0){            
            y *= num[i];        
        }else if (num[i]<0){
            neg++;
        }
    }    
        
    cout << "Кількість від’ємних чисел: " << neg << '\n';
    cout << "Добуток додатніх чисел: " << y << '\n';
    return 0;
}
