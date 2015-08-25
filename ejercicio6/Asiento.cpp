/*
 * Asiento.cpp
 *
 *  Created on: Aug 17, 2015
 *      Author: raquel
 */

#include "Asiento.h"
using namespace std;

Asiento::Asiento() {
	// TODO Auto-generated constructor stub

}

Asiento::~Asiento() {
	// TODO Auto-generated destructor stub
}

void Asiento::setNombre(string &nombre, string &ap1 , string &ap2, int& edad){

	//cout << "Introduzca el nombre del espectador" << endl;
	//cin >> nombre;
	this->nombreEspectador=nombre;
	this-> ap1=ap1;
	this->ap2=ap2;
	this->edad=edad;
	cout << "ok" << endl;
}


string Asiento::getNombre(){
	return nombreEspectador;
}

string Asiento::getApellido1(){
	return ap1;
}

string Asiento::getApellido2(){
	return ap2;
}


int Asiento::getEdad(){
	return edad;
}

