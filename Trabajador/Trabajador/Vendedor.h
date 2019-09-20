#include <iostream>
#include "Trabajador.h"

class Vendedor {
private:
	float comision;
	int ventas;

public:
	Vendedor();
	Vendedor(float comision, int ventas);

	virtual float calcularSalarioBruto();

	float getComision();

	int getVentas();

	void setComision(float comision);

	void setVentas(int ventas);
};
