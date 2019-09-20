#include <iostream>
#include "Gerente.h"
#include "Trabajador.h"

Gerente::Gerente()
{
}

Gerente::Gerente(float bono):bono(bono)
{
}

float Gerente::calcularSalarioBruto()
{
	float PagoBruto;

	PagoBruto = calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades() + bono;

	return PagoBruto;
}

float Gerente::getBono()
{
	return bono;
}

void Gerente::setBono(float bono)
{
	Gerente::bono = bono;
}
