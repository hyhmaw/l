/*2. Напишіть програму, користувач якої вписує значення двох років (умовно, 1976 та 2010),
виводить ці роки та виводить скільки років пройшло між першим та другим значенням – зробити це все через цикл. 
Якщо загальна кількість років більше 100 – зробити вихід із циклу.
Також кожен десятий елемент у циклі враховувати і вивести їх загальну кількість.
Зробити також перевірку для введення неправильних значень.*/ 

#include <iostream>
using namespace std;

int main() {
    int year1, year2;

   
    do {
        cout << "Enter the first year (greater than 0): ";
        cin >> year1;
        if (year1 <= 0) {
            cout << "Invalid value. Please try again.\n";
        }
    } while (year1 <= 0);

   
    do {
        cout << "Enter the second year (greater than the first year): ";
        cin >> year2;
        if (year2 <= year1) {
            cout << "Invalid value. The second year must be greater than the first.\n";
        }
    } while (year2 <= year1);

  
    cout << "Entered years: " << year1 << " and " << year2 << endl;

    int totalYears = year2 - year1;
    cout << "Years passed between " << year1 << " and " << year2 << ": " << totalYears << endl;

   
    if (totalYears > 100) {
        cout << "The number of years is greater than 100." << endl;
        return 0;
    }

  
    int countTenthYears = 0;
    for (int i = year1 + 1; i <= year2; i++) {
        if ((i - year1) % 10 == 0) {
            countTenthYears++;
        }
    }

    cout << "Number of every tenth year between " << year1 << " and " << year2 << ": " << countTenthYears << endl;

    return 0;
}