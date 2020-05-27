/*
 * Main.cpp
 *
 *  Created on: 27 may. 2020
 *      Author: oyuki
 */
#include<iostream>
#include<string>
#include"VistaAlumno.h"
#include "Main.h"
using namespace std;
Main::Main() {
	// TODO Auto-generated constructor stub

}

Main::~Main() {
	// TODO Auto-generated destructor stub
}
int main(){
	int opc;
	cout<<"¿Que es lo que desea hacer?"<<endl;
	cout<<"Registrar Alumno"<<endl;
	cout<<"Buscar Alumno"<<endl;
	cout<<"Regresar"<<endl;
	cin>>opc;
	switch(opc){
	case 1:
		VistaAlumno* alumnoVista;
		alumnoVista= new VistaAlumno;
		alumnoVista->registraAlumno();
		break;
	case 2:
		cout<<"Buscando :)"<<endl;
		break;
	case 3:
		cout<<"Vuelve pronto! :D"<<endl;
	}
}

