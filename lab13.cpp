#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;
int main(){
    int flat;
    int rooms;
    int residents;
    
    cout<<"Input flat number\n"; cin >> flat; 

    switch (flat){
        case 1:{
            rooms = 2;
            residents = 2;
            break;
        }
        case 2:{
            rooms = 1;
            residents = 1;
            break;
        }
        case 3:{
            rooms = 3;
            residents = 5;
            break;
        }
        case 4:{
            rooms = 2;
            residents = 6;
            break;
        }
        case 5:{
            rooms = 3;
            residents = 4;
            break;
        }
        default: 
            cout << "Неправильний номер квартири!";
            return 1;
    }


    cout << "Кількість кімнат: " << rooms << '\n';
    cout << "Кількість мешканців: " << residents << '\n';
    
    return 0;
}