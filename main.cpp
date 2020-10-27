#include <iostream>
#include "arreglo_dinamico.h"
using namespace std;

// void modificar(int *a){
//     *a = *a+1;//Se accede al valor que tiene esa variable
// }

int main(){
    ArregloDinamico str;
    str.insertar_final("Fabian");
    str.insertar_final("Alejandro");
    str.insertar_final("Esqueda");
    str.insertar_final("Rodriguez");
    str.insertar_final("Andy");
    str.insertar_final("Josue");
    str.insertar_final("Esqueda");
    str.insertar_final("Rodriguez");

    str.insertar_inicio("Esqueda Rodriguez");
    str.insertar_inicio("Alan Jareth");

    // string prueba;
    // getline(cin, prueba);
    // str.setString(prueba);
    // str.insertar_inicio(prueba); 

    cout<<"\nELEMENTOS AGREGADOS AL INICIO Y AL FINAL DEL ARREGLO\n\n";

    for (size_t i = 0; i < str.size(); i++){
        cout << str[i] << " ";
    } 
    cout<<"\n\n";

    
    
    // cout<<"\nELEMENTOS AGREGADOS AL INICIO DEL ARREGLO\n\n";

    // for (size_t i = 0; i < str_i.size(); i++){
    //     cout << str_i[i] << " ";
    // } 



    // int *b=nullptr;//Inicializar un puntero, se inicializa de forma vacia
    // b = new int[100];//Se reserva memoria para almacenar un entero
    // cout<<b<<" "<<*b<<endl;

    // delete [] b;//Libera la memoria

    // int a = 12;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // modificar(&a);//Se esta mandando la direccion de memoria
    // cout<<a<<endl;

    return 0;
}