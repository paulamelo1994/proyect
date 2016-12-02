#include "Historia.h"

Historia::Historia(afeccion,descripcionA,citas,dia,descripcionC,medicamentos,dosis)
{
	this->afeccion=afeccion;
	this->descripcionA=descripcionA;

	this->citas=citas;
	this->dia=dia;
	this->descripcionC=descripcionC;

	this->medicamentos=medicamentos;
	this->dosis=dosis;
}

Historia::~Historia(){
}

string getAfeccion();
string getDescripcionA();

string getCitas();
string getDia();
string getDescripcionC();

string getMedicamento();
string getNumDosis();