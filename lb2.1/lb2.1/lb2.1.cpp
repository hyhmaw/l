/*1. Напишіть програму, яка виводить усі парні числа від 1 до N, де N - введене число користувача.
Також наприкінці вивести суму парних чисел, загальну суму всіх чисел та суму непарних. 
Потім їх скласти між собою, привести до дробного типу, поділити на 2 і вивести результат. */

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "N: ";
    cin >> N;

    int sumEven = 0, sumOdd = 0, sumAll = 0;


    cout << "Even numbers from 1 to " << N << ": ";
    for (int i = 1; i <= N; i++) {
        sumAll += i; 
        if (i % 2 == 0) {
            cout << i << " ";
            sumEven += i; 
        }
        else {
            sumOdd += i;  
        }
    }

    cout << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Total sum of all numbers: " << sumAll << endl;

  
    double result = (sumEven + sumOdd + sumAll) / 2.0;

    cout << "Result: " << result << endl;

    return 0;
}