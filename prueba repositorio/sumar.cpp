#include <iostream> 
#include <conio.h>
using namespace std;
int sumar(int num1, int num2);
int main(){
    int v1,v2,total;
    cout<<"ingrese un numero: "<<endl;
    cin>>v1;
    cout<<"ingrese un nuemero: "<<endl;
    cin>>v2;

    total = sumar(v1,v2);
    getch();
    return0;
}

int sumer(int num1, int num2){
    return num1+num2;
}