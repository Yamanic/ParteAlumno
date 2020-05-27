/*
 * AlumnoBs.h
 *
 *  Created on: 26 may. 2020
 *      Author: oyuki
 */
#include<string>
#ifndef ALUMNOBS_H_
#define ALUMNOBS_H_
using namespace std;
class AlumnoBs {
private:
	int validaAlumno(Alumno alumno);
public:
	AlumnoBs();
	virtual ~AlumnoBs();
	int registraAlumno(Alumno alumno);

};

#endif /* ALUMNOBS_H_ */
