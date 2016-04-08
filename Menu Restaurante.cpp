// Menu Restaurante.cpp : Defines the entry point for the console application.
//
// Menu Restaurante
// Alumno: Andres Arturo Justiniano Gareca
// Registro: 2016114649
// Alumno: Edwin Mercado Vaca
// Registro: 2016112328

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdlib.h"
#define ch 3
#define chq 5
#define cpf 2
#define cs 2.5
using namespace std;
void main()
{
	int item,cant;
	float h,hq,pf,s,total,tph,tphq,tppf,tps;
	
	cout << "==================================== Menu ==================================" << endl;
	cout << "Bienvenido Usuario" << endl;
	cout << "-Items.-" << endl;
	cout << "Hamburguesas (3Bs)" << endl;
	cout << "Hamburguesas con queso (5bs)" << endl;
	cout << "Porcion Papas Fritas (2Bs)" << endl;
    cout << "Vaso de Soda (2.5Bs)" << endl;
	cout << "=============================================================================" << endl;
    cout << "Ingrese Pedido:  ";
	cin  >> item;
	switch (item)
		{

		case 1:
		       cout << "Ingrese la cantidad de hamburguesas simples:  ";
			   cin  >>h;
			   tph=h*ch;
			   cout << "El Total parcial de las hamburguesas es: " << tph << endl;
		
		case 2:
			   cout << "Ingrese La cantidad del hamburguesas con queso:  ";
			   cin  >> hq;
			   tphq=hq*chq;
			   cout << "El Total Parcial de las Hamburguesas con queso es:  " <<tphq << endl;

		case 3: 
			   cout << "Ingrese La cantidad De Porciones de Papas Fritas:  ";
			   cin  >> pf;
			   tppf=pf*cpf;
			   cout << "El Total Parcial De las Porciones de papas Fritas es:  " << tppf << endl;

		case 4:
			   cout << "Ingrese La cantidad de vasos de soda:  ";
			   cin  >> s;
			   tps=s*cs;
			   cout << "El Total parcial De los vasos de soda es:  " << tps << endl;
		

	   }
	total=tph+tphq+tppf+tps;
	cout << "El Total Del Pedido es:  " << total << endl;
	cout << "=============================================================================" << endl;
	getch();
}

