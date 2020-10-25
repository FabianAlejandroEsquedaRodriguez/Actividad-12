#include <iostream>
using namespace std;

// void modificar(int *a){
//     *a = *a+1;//Se accede al valor que tiene esa variable
// }

int main(){
    int *b=nullptr;//Inicializar un puntero, se inicializa de forma vacia
    b = new int[100];//Se reserva memoria para almacenar un entero
    cout<<b<<" "<<*b<<endl;

    delete [] b;//Libera la memoria

    // int a = 12;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // modificar(&a);//Se esta mandando la direccion de memoria
    // cout<<a<<endl;

    return 0;
}