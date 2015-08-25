/*
 * Asiento.h
 *
 *  Created on: Aug 17, 2015
 *      Author: raquel
 */

#ifndef ASIENTO_H_
#define ASIENTO_H_
#include <iostream>
using namespace std;

class Asiento {
public:
	Asiento();
	virtual ~Asiento();

	void setNombre(string&, string&, string&, int&);
	string getNombre();
	string getApellido1();
	string getApellido2();
	int getEdad();

private:
	string nombreEspectador;
	string ap1;
	string ap2;
	int edad;

};

#endif /* ASIENTO_H_ */
