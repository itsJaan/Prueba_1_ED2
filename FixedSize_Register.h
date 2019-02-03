//
// Created by Javier Nunez on 2/1/2019.
//

#ifndef PRUEBA_PARCIAL_I_FIXEDSIZE_REGISTER_H
#define PRUEBA_PARCIAL_I_FIXEDSIZE_REGISTER_H
#include "DataFile.h"

class FixedSize_Register {
public:
    DataFile *f;
    int code;
    char * name[30];
    double salary;
    char *job[20];



    void print_register();
    char * toChar();
    void fromChar(char *);
    void open_file (char *);
    void write_into_file();
    void read_from_file(int pos);
    void close_file();
    int get_size();

};

#endif //PRUEBA_PARCIAL_I_FIXEDSIZE_REGISTER_H
