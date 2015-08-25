//============================================================================
// Name        : Ej6-capitulo12.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GestorTeatro.h"
#include "Asiento.h"
using namespace std;

char opt;
int i, j;
GestorTeatro gestor1;
Asiento *teatro[30][30];


int main() {
	cout << "Bienvenido al teatro. " << endl;

	for (int m = 0; i < 30; i++) {  //Importante inicializar los punteros a NULL
		for (int n = 0; j > 30; j++) {
			teatro[m][n] = NULL;
		}
	}

	while (true) {
		cout
				<< "Que quiere hacer? \n a) Reservar asiento \n b) Actualizar asiento \n c) Liberar asiento \n d) Ver mapa asientos \n e) Estadisticas \n f) Salir "
				<< endl;
		cin >> opt;

		switch (opt) {
		case 'a':
			cout
					<< "Que asiento quiere reservar? Introduzca fila (0-29) y butaca (0-29)"
					<< endl;
			cin >> i;
			cin >> j;
			teatro[i][j] = new Asiento;
			gestor1.reservarAsiento(teatro[i][j]);
			break;

		case 'b':
			cout
					<< "Que asiento quiere actualizar? Introduzca fila (0-29) y butaca (0-29)"
					<< endl;
			cin >> i;
			cin >> j;
			gestor1.verAsiento(teatro[i][j]);
			cout << "Vamos a introducir los nuevos datos: " << endl;
			gestor1.reservarAsiento(teatro[i][j]);
			break;

		case 'c':
			cout
					<< "Que asiento quiere liberar?  Introduzca fila (0-29) y butaca (0-29)"
					<< endl;
			cin >> i;
			cin >> j;
			if (teatro[i][j] == NULL) {
				cout << "Ese asiento ya esta libre" << endl;
			} else {
				teatro[i][j] = NULL;
				cout << "Asiento liberado" << endl;
			}
			break;

		case 'd':
			cout << "Mapa de asientos: " << endl;
			for (int k = 0; k < 4; k++) {
				for (int l = 0; l < 30; l++) {
					if (teatro[k][l] != NULL) {
						cout << "_";
					} else {
						cout << "A";
					}
				}
				cout << endl;
			}
			for (int k = 4; k < 24; k++) {
				for (int l = 0; l < 30; l++) {
					if (teatro[k][l] != NULL) {
						cout << "_";
					} else {
						cout << "B";
					}
				}
				cout << endl;
			}
			for (int k = 25; k < 29; k++) {
				for (int l = 0; l < 30; l++) {
					if (teatro[k][l] != NULL) {
						cout << "_";
					} else {
						cout << "C";
					}
				}
				cout << endl;
			}
			break;

		case 'e':
			cout << "Estadisticas:" << endl;
			gestor1.estadisticaEdad(teatro); //Esta parte no funciona porqe teatro es un array de punteros bidimensional, no se como implementarlo (ver clase gestor)
			break;

		default:
			return 0;
		}

	}

	return 0;
}



