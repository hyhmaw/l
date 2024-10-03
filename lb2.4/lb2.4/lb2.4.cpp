/*4. Напишіть програму, яка виводить усі прості числа від 1 до N 
(використовуйте цикл та перевірку на простоту). */ 

#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) {
            return false;  
        }
    }
    return true; 
}

int main() {
    int N;
    cout << "Enter the number N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << ": "; // прості числа
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";  
        }
    }
    cout << endl;

    return 0;
}