#ifndef PACIENTE.H
#define PACIENTE.H

#include <string>
using namespace std;

class Paciente {
	private 
		int cedula;
		string nombre;
		string sexo;
		int edad;

	public
		Paciente (cedula, nombre, sexo, edad);
		~Paciente ();
		int getCedula();
		string getNombre();
		string getSexo();
		int getEdad();
};

#endif
