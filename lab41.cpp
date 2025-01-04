#include <iostream>
#include <math.h>

using namespace std;

void sumNum(int A[], int B[], int n, int sum[]){
    for (int i = 0; i <= n; ++i) {
        sum[i]=A[i]+B[i];
    }
}
void multiplyNum(int A[], int B[], int n, int multiply[]){
    for (int i = 0; i <= n; ++i) {
        multiply[i]=A[i]*B[i];
    }
}

int main (){
    int n;
    cout << "Введіть степінь многочлена: ";
    cin >> n;
    int A[n+1];
    int B[n+1];
    int sum[n+1];
    int multiply[n+1];
    cout << "Введіть коефіцієнти першого многочлена (від a0 до an): ";
    for (int i = 0; i <= n; ++i) {
        cin >> A[i];
    }
    cout << "Введіть коефіцієнти другого многочлена (від b0 до bn): ";
    for (int i = 0; i <= n; ++i) {
        cin >> B[i];
    }
    sumNum(A, B, n, sum);
    
    cout << "\nСума многочленів sum(x): ";
    for (int i = 0; i <= n; ++i) {
        cout << sum[i] << "x^" << i;
        if (i != n) cout << " + ";
    }
    cout << endl;

    multiplyNum(A, B, n, multiply);
    cout << "\nДобуток  многочленів: ";
    for (int i = 0; i <= n; ++i) {
        cout << multiply[i] << "x^" << i;
        if (i != n) cout << " + ";
    }
    cout << endl;

    return 0;
}