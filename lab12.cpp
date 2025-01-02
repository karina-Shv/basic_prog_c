#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;
int main(){
    double x;
    double y;
    double tax, taxAmount, amountPay, res;
    char type;
    cout<<"Input type: A, B or C\n"; cin >> type;    
    cout<<"Input x\n"; cin >> x;
/*

//повна команда розгалудження 
    if (type == 'A'){
        y = 12.4*sin(abs(x/2.1))-8.3*cos(1.2*x);
        res = 100*abs(y+50);
        tax = 0.1;
    } else if (type == 'B'){
        y = abs(cos(x)/2.7)*4-9.1*sin(1.2*x+1);
        res = 150*abs(y+100);
        tax = 0.15;
    } else if (type == 'C'){
        y = abs(sin(x)/3.124-cos(x*x))-8.3*sin(3*x);
        res = 100*abs(y+135);
        tax = 0.2;
    } else{
        cout<<"Incorect input\n";
        return 1;
    }
*/
//коротка команда розгалудження 
    if (type == 'A'){
        y = 12.4*sin(abs(x/2.1))-8.3*cos(1.2*x);
        res = 100*abs(y+50);
        tax = 0.1;
    } 
    if (type == 'B'){
        y = abs(cos(x)/2.7)*4-9.1*sin(1.2*x+1);
        res = 150*abs(y+100);
        tax = 0.15;
    }
    if (type == 'C'){
        y = abs(sin(x)/3.124-cos(x*x))-8.3*sin(3*x);
        res = 100*abs(y+135);
        tax = 0.2;
    }

    taxAmount = res * tax;
    amountPay = res - taxAmount;
    cout << "Нарахована сума: " << y << '\n';
    cout << "Сума податку: " << taxAmount << '\n';
    cout << "Сума до видачі: " << amountPay << '\n';


    return 0;
}