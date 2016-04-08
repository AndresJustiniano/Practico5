// menuareafiguras.cpp : Defines the entry point for the console application.
// Programa: Menu para calcular area de figuras geometricas
// Practico: #5
// Alumno: Andres Arturo Justiniano Gareca
// Registro: 2016114649
// Alumno: Erwin Mercado Vaca
// Registro: 2016112328
// Fecha de Presentacion: 07/04/16

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define pi 3.1416
using namespace std;
void main()
{
    int opcion;
	float b,h,ac,aq,at,r,l;
	cout << "============================== Menu ================================" << endl;
	cout << "                        Bienvenido Usuario                          " << endl;
	cout << "-Menu Para Area de Figuras Geometricas                              " << endl;
	cout << "1 Opcion:   Area de un Cuadrado " << endl;
	cout << "2 Opcion:   Area de un Circulo  " << endl;
	cout << "3 Opcion:   Area de un Triangulo" << endl;
	cout << "====================================================================" << endl;
	cout << "-Introduzca Una Opcion" << endl;
	cin  >> opcion;
	switch (opcion)
	   {
	    case 1:
			   cout << "1 Opcion: Area De Un Cuadrado " << endl;
			   cout << "Introduzca La Medida de un lado:  ";
			   cin  >> l;
			   aq=l*l;
			   cout << "El Area del Cuadrado es:  " << aq << endl;
			   break;
		case 2: 
			   cout << "2 Opcion: Area de un Circulo " << endl;
			   cout << "Introduzca el Radio:  ";
			   cin  >> r;
			   ac=pi*r*r;
			   cout  << "El Area del Circulo es:  " << ac << endl;
			   break;
		case 3:
			   cout << "3 Opcion: Area de un Triangulo  " << endl;
			   cout << "Introduzca La Base:  ";
			   cin  >> b;
			   cout << "Introduzca La Altura:  ";
			   cin  >> h;
			   at=(b*h)/2;
			   cout << "El Area del Triangulo es:  " << at << endl;
			   break;
	    }
	getch();
}

