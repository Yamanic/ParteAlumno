/*
 * MedioContacto.cpp
 *
 *  Created on: 27 may. 2020
 *      Author: oyuki
 */

#include "MedioContacto.h"

MedioContacto::MedioContacto() {
	// TODO Auto-generated constructor stub

}

MedioContacto::~MedioContacto() {
	// TODO Auto-generated destructor stub
}
void MedioContacto::setTipo(string tipo){
	this->tipo=tipo;
}
string MedioContacto::getTipo(){
	return tipo;
}
void MedioContacto::setNombre(string nombre){
	this->nombre=nombre;
}
string MedioContacto::getNombre(){
	return nombre;
}
