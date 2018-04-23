#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>


using namespace std;


int contar_largo(char* holi)
{
     int cont=-2;
     ifstream ficheroEntrada;
     string linea;

     ficheroEntrada.open (holi);
     getline(ficheroEntrada, linea);
	while(!ficheroEntrada.eof())
	{
		getline(ficheroEntrada,linea);
		cont++;
	}
	return cont;
}


int main(int argc, char* argv[])
{
	cout<<"Cantidad de lineas en el fichero : "<<contar_largo(argv[1])<<endl;
}
