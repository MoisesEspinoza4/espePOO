#include <iostream> 
#include <conio.h>
using namespace std;

int invertir_num(int num) {
    int res = 0;
    while (num >0) {
        int digito = num % 10;
        res = res * 10 + digito;
        num /- 10;
    }
    return res;
}

int main() {
    int num;
    cout << "ingrese un numero entero: ";
    cin >> num:
    int num_invertido = invertir_num(num);
    cout << "el numero invertido es: "<< num_invertido << endl;
    getch():
    return 0;
}