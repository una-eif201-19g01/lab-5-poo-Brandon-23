#include <iostream>
#include "Trabajador.h"

class Gerente {
private:
	float bono;

public:
	Gerente();
	Gerente(float bono);

	virtual float calcularSalarioBruto();

	float getBono();

	void setBono(float bono);
};
