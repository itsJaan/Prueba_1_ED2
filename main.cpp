#include <iostream>

#include "FixedSize_Register.h"
#include "KnownVarSize_Register.h"
#include "DelimiterVarSize_Register.h"

using namespace std;
int main() {
    int opcion, sub;
    FixedSize_Register file;
    cout<<"Creando Archivo con nombre \\dataFileFix.dat\\ \n";
    file.f->DataFile("dataFileFix.dat");

    KnownVarSize_Register file2;
    cout<<"Creando Archivo con nombre \\dataFileKno.dat\\ \n";
    file2.f->DataFile("dataFileKno.dat");

    DelimiterVarSize_Register file3;
    cout<<"Creando Archivo con nombre \\dataFileDel.dat\\ \n";
    file3.f->DataFile("dataFileDel.dat");

    do {
        cout<<"1 - Fixed Size Register \n";
        cout<<"2 - Known Variable Register\n";
        cout<<"3 - Delimeter Variable Register\n";
        cout<<"0 - Salir\n\n";
        cout<<"Ingrese su opcion:";
        cin>>opcion;
        switch (opcion) {
            case 1:
                cout<<"1 - Print Register\n";
                cout<<"2 - To Char\n";
                cout<<"3 - From Char\n";
                cout<<"4 - Open File\n";
                cout<<"5 - Write into File\n";
                cout<<"6 - Close File\n";
                cout<<"7 - Read from File\n";
                cout<<"8 - Get File size (In Bites)\n";
                cout<<"0 - Salir\n\n";
                cout<<"Ingrese su opcion:";
                cin>>sub;

                do{
                    switch(sub){
                        case 1:
                            file.print_register();
                            break;
                        case 2:
                            file.toChar();
                            break;
                        case 3:
                            //file.fromChar("dataFileFix.dat");
                            break;
                        case 4
                            ///file.open_file("dataFileFix.dat");
                            break;
                        case 5:
                            file.write_into_file();
                            break;
                        case 6:
                            file.close_file();
                            break;
                        case 7:
                            int pos;
                            cout<<"Posicion del archivo a leer: ";
                            cin>>pos;
                            file.read_from_file(pos);
                            break;
                        case 8:
                            file.get_size();
                            break;
                    }

                }while(sub!=0);
                break;
            case 2:
                cout<<"1 - Print Register\n";
                cout<<"2 - To Char\n";
                cout<<"3 - From Char\n";
                cout<<"4 - Open File\n";
                cout<<"5 - Write into File\n";
                cout<<"6 - Close File\n";
                cout<<"7 - Read from File\n";
                cout<<"8 - Get File size (In Bites)\n";
                cout<<"0 - Salir\n\n";
                cout<<"Ingrese su opcion:";
                cin>>sub;

                do{
                    switch(sub){
                        case 1:
                            file2.print_register();
                            break;
                        case 2:
                            file2.toChar();
                            break;
                        case 3:
                            //file2.fromChar("dataFileKno.dat");
                            break;
                        case 4:
                            //file2.open_file("dataFileKnow.dat");
                            break;
                        case 5:
                            file2.write_into_file();
                            break;
                        case 6:
                            file2.close_file();
                            break;
                        case 7:
                            int pos;
                            cout<<"Posicion del archivo a leer: ";
                            cin>>pos;
                            file2.read_from_file(pos);
                            break;
                        case 8:
                            file2.get_size();
                            break;
                    }

                }while(sub!=0);
                break;

            case 3:
                cout<<"1 - Print Register\n";
                cout<<"2 - To Char\n";
                cout<<"3 - From Char\n";
                cout<<"4 - Open File\n";
                cout<<"5 - Write into File\n";
                cout<<"6 - Close File\n";
                cout<<"7 - Read from File\n";
                cout<<"8 - Get File size (In Bites)\n";
                cout<<"0 - Salir\n\n";
                cout<<"Ingrese su opcion:";
                cin>>sub;

                do{
                    switch(sub){
                        case 1:
                            file3.print_register();
                            break;
                        case 2:
                            file3.toChar();
                            break;
                        case 3:
                            //file3.fromChar("dataFileDel.dat");
                            break;
                        case 4:
                            //file3.open_file("dataFileDel.dat");
                            break;
                        case 5:
                            file3.write_into_file();
                            break;
                        case 6:
                            file3.close_file();
                            break;
                        case 7:
                            int pos;
                            cout<<"Posicion del archivo a leer: ";
                            cin>>pos;
                            file3.read_from_file(pos);
                            break;
                        case 8:
                            file3.get_size();
                            break;
                    }
                }while(sub!=0);
                break;
        }
    } while (opcion!=0);

    return 0;
}