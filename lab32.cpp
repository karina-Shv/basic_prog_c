#include <iostream>
#include <math.h>

using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int original = num;
    int n = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == original;
}

void findArmstrongNumbers(int *start, int *end) {
    for (int i = *start; i <= *end; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int start = 10, end = 9999;

    cout << "Числа Армстронга в діапазоні від " << start << " до " << end << ":\n";
    findArmstrongNumbers(&start, &end);

    return 0;
}