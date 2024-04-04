#include <iostream>
  
using namespace std;

int main(){
    int age;

    cout << "Entre com usua idade: ";
    cin >> age;
    if (age >= 18){
        cout << "Voce eh maior de idade" << endl;
    }
    return false;
}