#include "arreglo_dinamico.h"
#include <iostream>
using namespace std;

ArregloDinamico::ArregloDinamico(){
    arreglo = new string [MAX];//Crea el arreglo dinamico reservando la memoria
    cont = 0;
    tam = MAX; //tam = 8;
}

ArregloDinamico::~ArregloDinamico(){
    delete [] arreglo;//Liberar la memoria que se reservo para el arreglo dinamico
}

void ArregloDinamico::insertar_final(const string &s){
    if(cont == tam){//Nuestro arreglo esta lleno
        //expandir la capacidad para seguir almacenando info
        expandir();
    }

    arreglo[cont] = s;//El arreglo inicia en la posicion cont 
                      //y guarda en esa posicion lo que se le pase como parametro
    cont++;
}

void ArregloDinamico::insertar_inicio(const string &s){
    if(cont == tam){//Nuestro arreglo esta lleno
        //expandir la capacidad para seguir almacenando info
        expandir();
    }

    for (size_t i = cont; i>0; i--){//Va a iniciar desde el final del arreglo
                                    //Y se van a mover los elementos hacia la derecha

            arreglo[i] = arreglo[i-1];//Mover nuestro elemento a la siguiente posicion
    }

    arreglo[0] = s;//En la posicion 0 se va a agregar el elemento que recibe como parametro
    cont++;
}

size_t ArregloDinamico::size(){
    return cont;
}

void ArregloDinamico::expandir(){
    string *nuevo = new string [tam+MAX];//Se va a expandir el tamaño del arreglo

    for (size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];//Copia los elementos hacia el nuevo arreglo
    }

    delete[] arreglo;
    arreglo = nuevo;//Copiar las direcciones de memoria del primer arreglo hacia el nuevo, porque son punteros
    tam += MAX;//El tamaño ahora es el tamaño + 8, que vale la variable MAX  
}

// void ArregloDinamico::setString(const string &st){
//     this->st = st;
// }

// string ArregloDinamico::getString(){
//     return st;
// }