#include "Vendedor.h"

Vendedor::Vendedor()
{
}

Vendedor::Vendedor(float comision, int ventas): comision(comision), ventas(ventas)
{
}

float Vendedor::calcularSalarioBruto()
{
	float PagoBruto;

	PagoBruto = calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades() + (ventas*comision);

	return PagoBruto;
}

float Vendedor::getComision()
{
	return comision;
}

int Vendedor::getVentas()
{
	return ventas;
}

void Vendedor::setComision(float comision)
{
	Vendedor::comision = comision;
}

void Vendedor::setVentas(int ventas)
{
	Vendedor::ventas = ventas;
}
