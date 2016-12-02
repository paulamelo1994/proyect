#include "paciente.h"

Paciente::Paciente(cedula, nombre, sexo, edad){
	this->cedula= cedula;
	this->nombre= nombre;
	this->sexo= sexo;
	this->edad= edad;
}
Paciente::~Paciente(){
}

int Paciente::setCedula(){
	this->cedula=cedula;
}
string Paciente::setNombre(){
	this->nombre=nombre;

}
string Paciente::setSexo(){
	this->sexo=sexo;
}
int Paciente::setEdad(){
	this->edad=edad;
}
