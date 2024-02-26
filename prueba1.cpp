#include <iostream>
using namespace std;

int main(){
    float num1;
    cout<<"ingrese un numero: "<<endl; cin>>num1;

    if(num1 >= 1){
        cout<<"El numero ingresado es positivo ";
    } else if (num1 < 0 ){
        cout<<"Es un numero negativo ";
    }else{
        cout<<"El numero ingresado es cero";
    }

    return 0;
};
