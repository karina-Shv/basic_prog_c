#include <iostream>
#include <math.h>

using namespace std;

void rearrangeArray(int A[], int n){
    int indexB=0;
    int B[n];
    for (int i=0; i<n; ++i) {
        if (A[i] >= 0){
            B[indexB++]=A[i]; 
        }
    }
    for (int i=0; i<n; ++i) {
        if (A[i] < 0){
            B[indexB++]=A[i];      
        }
    }
    for (int i = 0; i < n; ++i) {
        A[i] = B[i];
    }
}

int main (){
    int n;    
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int A[n];
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    rearrangeArray(A, n);

    cout << "Результуючий масив:\n";
    for (int i=0; i<n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}