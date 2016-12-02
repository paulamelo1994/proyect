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
	//metodos set
	void setAfeccion(afeccion);
	void setDescripcionA(descripcionA);

	void setCitas(citas);
	void setDia(dia);
	void setDescripcionC(descripcionC);

	void setMedicamento(medicamentos);
	void setNumDosis(dosis);
	//Metodos get
	string getAfeccion();
	string getDescripcionA();

	string getCitas();
	string getDia();
	string getDescripcionC();

	string getMedicamento();
	string getNumDosis();

	
};

#endif