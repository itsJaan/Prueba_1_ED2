//
// Created by Javier Nunez on 2/1/2019.
//

#ifndef PRUEBA_PARCIAL_I_DELIMITERVARSIZE_REGISTER_H
#define PRUEBA_PARCIAL_I_DELIMITERVARSIZE_REGISTER_H

#include "DataFile.h"

class DelimiterVarSize_Register {
public:

    DataFile *f;
    char * name;
    int code;
    char *job;
    double salary;


    void print_register( );
    char * toChar( );
    void fromChar( char * );
    void open_file ( char * );
    void write_into_file();
    void read_from_file( int pos );
    void close_file( );
    int get_size(  );

};


#endif //PRUEBA_PARCIAL_I_DELIMITERVARSIZE_REGISTER_H
