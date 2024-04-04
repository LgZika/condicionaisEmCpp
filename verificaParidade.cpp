#include <iostream>
  
using namespace std;

int main(){
    int num;

    cout << "Entre com um numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "O numero digitado eh par" << endl;
    }
    return false;
}