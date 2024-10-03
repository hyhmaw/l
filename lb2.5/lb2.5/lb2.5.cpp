/*5. Користувач вводить ціле число в першу і другу змінну,в циклі один раз виводяться адреси цих змінних,
потім виводяться значення від першої до другої змінної, але тільки зі знаком мінус.*/ 

#include <iostream>
using namespace std;

int main() {
    int first, second;

    
    cout << "Enter the first: ";
    cin >> first;
    cout << "Enter the second: ";
    cin >> second;

    cout << "Address of the first: " << &first << endl;
    cout << "Address of the second: " << &second << endl;

   
    cout << "Values from the first to the second variable with a negative sign:" << endl; // Значення від першої до другої змінної зі знаком мінус
    if (first < second) {
        for (int i = first; i <= second; i++) {
            cout << -i << " ";  
        }
    }
    else {
        for (int i = first; i >= second; i--) {
            cout << -i << " "; 
        }
    }
    cout << endl;

    return 0;
}