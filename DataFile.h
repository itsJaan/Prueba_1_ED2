//
// Created by Javier Nunez on 2/1/2019.
//

#ifndef PRUEBA_PARCIAL_I_DATAFILE_H
#define PRUEBA_PARCIAL_I_DATAFILE_H


#include <fstream>

class DataFile
{
public:
    DataFile();
    DataFile(char *);
    void abrir();
    void cerrar();
    void escribir(char*, int, int);
    char* leer(int, int);

    void setArchivo(char*);



    char *direccion;
    std::fstream *archivo;

};

#endif //PRUEBA_PARCIAL_I_DATAFILE_H
