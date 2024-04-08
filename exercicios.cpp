#include <iostream>
  
using namespace std;

int main(){
    int num, aux = 0;

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

    // Exercício 5
    cout << "5 - Entre com um numero: ";
    cin >> num;
    if (num < 10) {
        cout << "O numero eh menor que 10" << endl;
    } if (num > 10)  {
        cout << "O numero eh maior que 10" << endl;
    } else{
        cout << "O numero eh 10" << endl;
    }
    
    // Exercício 6
    while (aux == 0){
        cout << "6 - Entre com um numero entre 1 e 7: ";
        cin >> num;
        if ((num >= 1) && (num <= 7)){
            aux = 1;
        }
    }
    
    switch (num) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-Feira" << endl;
            break;
        case 3: 
            cout << "Terca-Feira" << endl;
            break;
        case 4:
            cout << "Quarta-Feira" << endl;
            break;
        case 5: 
            cout << "Quinta-Feira" << endl;
            break;
        case 6:
            cout << "Sexta-Feira" << endl;
            break;
        case 7:
            cout << "Sabado" << endl;
            break; 
        default:
            cout << "Nao eh um dia da semana" << endl;
    }
    return false;
}