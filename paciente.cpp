#include "paciente.h"

Paciente::Paciente(cedula, nombre, sexo, edad){
	this->cedula= cedula;
	this->nombre= nombre;
	this->sexo= sexo;
	this->edad= edad;
}
Paciente::~Paciente(){
}
int Paciente::getCedula(){
	return cedula;
}
string Paciente::getNombre(){
	return nombre;

}
string Paciente::getSexo(){
	return sexo;
}
int Paciente::getEdad(){
	return edad;
}

void Paciente::setCedula(cedula){
	this->cedula=cedula;
}
void Paciente::setNombre(nombre){
	this->nombre=nombre;

}
void Paciente::setSexo(sexo){
	this->sexo=sexo;
}
void Paciente::setEdad(edad){
	this->edad=edad;
}
