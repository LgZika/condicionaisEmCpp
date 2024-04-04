#include <iostream>
  
using namespace std;

int main(){
    int num;

    // Exercício 1
    cout << "Entre com um numero: ";
    cin >> num;
    if (num > 10) {
        cout << "O numero eh maior que 10" << endl;
    }

    // Exercício 2
    cout << "Entre com um numero: ";
    cin >> num;
    if (num == 0) {
        cout << "O numero digitado eh 0" << endl;
    }

    return false;
}