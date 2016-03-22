// Costo de Envio P5.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
	void main() 
{
	float costoenvio;
	float peso;
	cout << "ingrese el peso" << endl;
	cin >> peso;
	if ((peso<=0)) {
		cout << "Valor Invalido" << endl;
		cout << "No se Puede Enviar" <<endl;
		cout << "Error de Datos" << endl;
	} else {
		if ((peso<50)) {
			costoenvio = 1.5*peso;
		} else {
			if ((peso<=100)) {
				costoenvio = 4*peso;
			} else {
				if ((peso<=200)) {
					costoenvio = 6*peso;
				} else {
					if ((peso<=350)) {
						costoenvio = 10.50*peso;
					} else {
						if ((peso<=500)) {
							costoenvio = 15*peso;
						} else {
							cout << "no se puede enviar como carta por que excede el peso permitido" << endl;
						}
					}
				}
			}
		}
		cout << "el costo de envio es " << costoenvio << endl;
	}
	getch(); 
}
