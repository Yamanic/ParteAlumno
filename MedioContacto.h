/*
 * MedioContacto.h
 *
 *  Created on: 27 may. 2020
 *      Author: oyuki
 */
#include<string>
#ifndef MEDIOCONTACTO_H_
#define MEDIOCONTACTO_H_
using namespace std;
class MedioContacto {
private:
	string tipo;
	string nombre;
public:
	MedioContacto();
	virtual ~MedioContacto();
	void setTipo(string tipo);
	string getTipo();
	void setNombre(string nombre);
	string getNombre();
};

#endif /* MEDIOCONTACTO_H_ */
