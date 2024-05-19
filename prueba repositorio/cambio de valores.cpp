#include <iostream> 
#include <conio.h>
using namespace std:

void cambiar_con_punteris(int* a, int* b){
    int temp= *a:
    *a = *b;
    *b = temp; 
}
int main(){
    int num1, num2;
    cout << "ingrese el primer numero: ";
    cin>> num 1 ;
    cout <<"ingrese el segundo numero: ";
    cin>> num2;

    cout << "valores originales: numero 1= "<< num1 <<", numero 2= "<< num2 <<endl;
    cambiar_con_punteros(&num1,& num2);
    cout<<"valores intercambiados: numero 1= "<< num1 << ", numero 2="<< num2 <<endl;
    getch();
    return 0;
    
}