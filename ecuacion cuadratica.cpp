// ecuacion cuadratica.cpp : Defines the entry point for the console application.
// Autor: Andres Arturo Justiniano Gareca
// Registro:2016114649
// Programa:Ecuacion Cuadratica
// Practico:5
// Ejercicio:2

#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "conio.h"

using namespace std;
void main()
{   
	float a,b,c,D,x1,x2;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "ingrese el valor de b: " << endl;
	cin >> b;
	cout << "ingrese el valor de c: " << endl;
	cin >> c;
	D=b*b-4*(a)*(c);
	    if (D>0)
	    {
		 x1=-b+sqrt(D)/2*(a);
         x2=-b-sqrt(D)/2*(a);
	     cout << "el valor de x1 es: " << x1 << endl;
		 cout << "el valor de x2 es: " << x2 << endl;
		}
   getch ();
}

