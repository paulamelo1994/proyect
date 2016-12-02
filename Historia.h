#ifndef HISTORIA_H
#include HISTORIA_H
#include <string>
using namespace std;

class Historia
{
private:

	string afeccion, descripcionA;
	string citas, dia, descripcionC;
	string medicamentos, numDosis;


public:
	Historia(afeccion,descripcionA,citas,dia,descripcionC,medicamentos,dosis);
	~Historia();

	void setAfeccion();
	void setDescripcionA();

	void setCitas();
	void setDia();
	void setDescripcionC();

	void setMedicamento();
	void setNumDosis();

	
};