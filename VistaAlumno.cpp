/*
 * VistaAlumno.cpp
 *
 *  Created on: 26 may. 2020
 *      Author: oyuki
 */
#include<iostream>
#include<string>
#include"Alumno.h"
#include"AlumnoBs.h"
#include"MedioContacto.h"
#include "VistaAlumno.h"

using namespace std;
VistaAlumno::VistaAlumno() {
	// TODO Auto-generated constructor stub

}

VistaAlumno::~VistaAlumno() {
	// TODO Auto-generated destructor stub
}
void VistaAlumno::registraAlumno(){
	Alumno *alumno=0;
	string nombre,primerAp,segundoAp,carrera,tipo,nombrecont;
	int dia,mes,year,boleta;
	cout<<"Ingresa el nombre del alumno:"<<endl;
	cin>>nombre;
	cout<<"Ingresa el Primer Apellido:"<<endl;
	cin>>primerAp;
	cout<<"Ingresa el Segundo Apellido:"<<endl;
	cin>>segundoAp;
	cout<<"Ingresa el dia en que nacio:"<<endl;
	cin>>dia;
	cout<<"Ingresa el mes en el que nacio:"<<endl;
	cin>>mes;
	cout<<"Ingresa el año en el que nacio:"<<endl;
	cin>>year;
	cout<<"Ingresa la boleta del alumno:"<<endl;
	cin>>boleta;
	cout<<"Nombre de la carrera en la que esta inscrito:"<<endl;
	cin>>carrera;

	MedioContacto *mediocontacto;
	mediocontacto= new MedioContacto();
	cout<<"Ingresa el medio de contacto con el alumno:"<<endl;
	cin>>tipo;
	cout<<"Ingresa el nombre del contacto:"<<endl;
	cin>>nombrecont;
	alumno=new Alumno();
	alumno->setNombre(nombre);
	alumno->primerApellido(primerAp);
	alumno->segundoApellido(segundoAp);
	alumno->dia(dia);
	alumno->mes(mes);
	alumno->year(year);
	alumno->boleta(boleta);
	alumno->nombredecarrera(carrera);
	 mediocontacto->setTipo(tipo);
	 mediocontacto->setNombre(nombre);
	 alumno->agregarcontacto(*mediocontacto);
	AlumnoBs * alumnoBs;
	alumnoBs=new AlumnoBs();
	alumnoBs->registraAlumno(*alumno);
}







