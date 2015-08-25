/*
 * GestorTeatro.h
 *
 *  Created on: Aug 17, 2015
 *      Author: raquel
 */

#ifndef GESTORTEATRO_H_
#define GESTORTEATRO_H_
#include "Asiento.h"

class GestorTeatro {
public:
	GestorTeatro();
	virtual ~GestorTeatro();

	void reservarAsiento(Asiento *As1);
	void verAsiento(Asiento *As1);

	void estadisticaEdad(Asiento *arrAsientos[30][30]);

};

#endif /* GESTORTEATRO_H_ */
