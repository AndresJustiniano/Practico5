// ejercicio12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
	float p1,p2,ef,p,f,parcial1,parcial2,efinal,epractico,faltas,nf;
	int n;
	cout<<"ingrese el numero de estudiantes:  ";
	cin>>n;
	do {
		cout<<"introduca la nota del primer parcial ";
		cin>>p1;
		cout<<"introduzca la nota del segundo parcial ";
		cin>>p2;
		cout<<"introduzca la nota del examen final ";
		cin>>ef;
		cout<<"introduzca la nota del examen practico ";
		cin>>p;
		cout<<"introduzca el numero de faltas ";
		cin>>f;
		if (f>=9.6)
			efinal=0;
		else
			efinal=ef*40/100;
		parcial1=p1*20/100;
		parcial2=p2*20/100;
		epractico=p*20/100;
		nf=parcial1+parcial2+efinal+epractico;
		cout<<"la nota final es: "<<nf<<endl;
		if (nf>=51)
			cout<<"aprobado"<<endl;
		else
			cout<<"reprobado"<<endl;
		cout<<"Digite -999 para terminar el programa:  ";
		cin>>n;
	} while (n!=-999);
	getch();
}