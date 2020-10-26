#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

#include <iostream>
using namespace std;


class ArregloDinamico{

    public:
    ArregloDinamico(); //Constructor
    ~ArregloDinamico(); //Destructor

    void insertar_final(const string &s);//Aqui inserta elememtos en la posicion que marque el contador
    void insertar_inicio(const string &s);//Inserta elementos siempre en la posicion 0
    size_t size();//Para retornar los elementos en el arreglo

    // void setString(const string &st);
    // string getString();

    //Sobrecargar el operador de los [] para mostrar los datos
    string operator [] (size_t pos){
        return arreglo[pos];
    }

    private:
        string *arreglo;//Es un arreglo de strings
        string st;
        size_t tam;
        size_t cont;
        const static int MAX = 8; 
        void expandir();//Crecer el arreglo
};

#endif //ARREGLO_DINAMICO_H