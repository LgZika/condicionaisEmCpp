#include <iostream>
  
using namespace std;

int main(){
    int num;

    // Exercício 1
    cout << "1 - Entre com um numero: ";
    cin >> num;
    if (num > 10) {
        cout << "O numero eh maior que 10" << endl;
    }

    // Exercício 2
    cout << "2 - Entre com um numero: ";
    cin >> num;
    if (num == 0) {
        cout << "O numero digitado eh 0" << endl;
    }

    // Exercício 3
    cout << "3 - Entre com um numero: ";
    cin >> num;
    if (num < 0) {
        cout << "O numero digitado eh negativo" << endl;
    } else {
        cout << "O numero digitado eh positivo ou zero" << endl;
    }

    // Exercício 4
    cout << "4 - Entre com um numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "O numero eh par" << endl;
    } else {
        cout << "O numero eh impar" << endl;
    }
    
    return false;
}