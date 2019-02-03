//
// Created by Javier Nunez on 2/1/2019.
//

#include <iostream>
#include <fstream>
#include <cstring>

#include "DelimiterVarSize_Register.h"
using namespace std;

void DelimiterVarSize_Register:: print_register(){
    f->archivo->seekg(0, ios::beg);

    DelimiterVarSize_Register actual;

    f->archivo->read(reinterpret_cast<char *>(&actual) ,get_size());
    while (!f->archivo->eof()){
        cout << "Name: " << actual.name << "\nCode: " << actual.code << "\nJob: " << actual.job
             << "\nSalary: " << actual.salary;

        cout <<"\n------------------------\n";
    }
    f->archivo->read(reinterpret_cast<char *>(&actual) ,get_size());
    f->cerrar();
}
char * DelimiterVarSize_Register::toChar(){
    char caracter_separacion = ';';
    char caracter_de_fin = '|';
    int tamano_registro = this->get_size();
    char *nuevo = new char[tamano_registro];
    int pos = 0;

    int tamano_nombre = strlen(this->name);
    memcpy(&nuevo[pos], this->name, tamano_nombre);
    pos += tamano_nombre;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;

    memcpy(&nuevo[pos], (char*)&this->code, sizeof(int));
    pos += 4;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;

    int tamano_trabajo = strlen(this->job);
    memcpy(&nuevo[pos], this->job, tamano_trabajo);
    pos += tamano_trabajo;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;

    memcpy(&nuevo[pos], (char*)&this->salary, sizeof(double));
    pos += sizeof(double);
    memcpy(&nuevo[pos], &caracter_de_fin, 1);
    return nuevo;
}
void DelimiterVarSize_Register::fromChar(char * converter){
    string temporal = "";
    int i = 0, tamanoActual = 0, posicionActual = 0;
    bool terminarDeLeer = false;
    while(!terminarDeLeer) {
        if (converter[i] == '|') {
            if (posicionActual == 0) {
                strcpy(this->name, (char*)&temporal);
                posicionActual++;
            }
            else if (posicionActual == 1) {
                this->code=stoi(temporal);
                posicionActual++;
            }
            else if (posicionActual == 2) {
                strcpy(this->job, (char*)&temporal);
                terminarDeLeer = true;
            }
            else if (posicionActual == 3) {
                this->salary = stoi(temporal);
                posicionActual++;
            }

            temporal = "";
            tamanoActual = 0;
        }
        temporal += converter[i];
        tamanoActual++;
    }
    cout << "Nombre: " << this->name << endl;
    cout << "Codigo: " << this->code << endl;
    cout << "Trabajo: " << this->job << endl;
    cout << "Salario: " << this->salary << endl;

}void DelimiterVarSize_Register::open_file ( char * file){
    f = new DataFile(file);
    f->abrir();
}
void DelimiterVarSize_Register::write_into_file(){

}
void DelimiterVarSize_Register::read_from_file( int pos ){
    f->leer(pos, get_size());
}
void DelimiterVarSize_Register::close_file( ){
    f->cerrar();
}
int DelimiterVarSize_Register::get_size(  ){
    int size= sizeof(code)+ sizeof(job)+ sizeof(name)+ sizeof(salary);
}