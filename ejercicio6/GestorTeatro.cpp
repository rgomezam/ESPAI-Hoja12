/*
 * GestorTeatro.cpp
 *
 *  Created on: Aug 17, 2015
 *      Author: raquel
 */

#include "GestorTeatro.h"
using namespace std;

GestorTeatro::GestorTeatro() {
/*	for (int i=0; i<30;i++){
		for (int j=0;j>30; j++){
			pAsiento[i][j]=NULL;
		}
	} */

}

GestorTeatro::~GestorTeatro() {
	// TODO Auto-generated destructor stub
}

void GestorTeatro::reservarAsiento(Asiento *As1){

	string nombre, apellido,segundoApellido;
	int edad;

	cout << "Introduzca el nombre del espectador" << endl;
	cin >> nombre;
	cout << "Introduzca el primer apellido " << endl;
	cin >> apellido;
	cout << "Intorduzca el segundo apellido" << endl;
	cin>> segundoApellido;
	cout << "Introduzca la edad" << endl;
	cin >> edad;
	As1->setNombre(nombre, apellido , segundoApellido, edad);

	//cout << "correcto" << endl;

}

void GestorTeatro::verAsiento(Asiento *As1){

	cout << "El asiento esta ocupado por " << As1->getNombre() << " " << As1->getApellido1() << " " << As1->getApellido2()  << ", edad: " <<  As1->getEdad() << endl;

	//cout << "correcto" << endl;

}


void GestorTeatro::estadisticaEdad(Asiento* arrAsientos[30][30]){
	int mayor=0;
	int menor=200;

	for (int x=0;x<30; x++){
		for (int y=0;y<30;y++){
		//if ( arrAsientos[x][y]!=NULL &&   arrAsientos[x][y]->getEdad() > mayor) {(arrAsientos->getEdad())=mayor;}
		//if ((arrAsientos[x][y]->getEdad()) < menor){(arrAsientos->getEdad())=menor;}
		}
	}
	//cout << "todo OK" << endl;
}
