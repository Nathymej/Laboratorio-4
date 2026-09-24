#include <iostream>
using namespace std;

int main() {
int numero;
cout << "Ingrese un número ";
cin >>numero;
if (numero > 0) {
    cout<<"el numero es positivo "<<endl;
} else if (numero<0){
    cout<<" el numero es negativo"<<endl;
    
} else{
    cout<<"el numero es igual a cero"<<endl;
}
 
return 0;
}