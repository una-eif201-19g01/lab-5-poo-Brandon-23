#include <iostream>
#include "Trabajador.h"

Trabajador::Trabajador(){}

Trabajador::Trabajador(string id, int horasLab, float precioHora, int anosLaborados): id(id), horasLab(horasLab), precioHora(precioHora), anosLaborados(anosLaborados)
{
}

float Trabajador::calcularSalarioBase()
{
	float Pago;

	Pago = precioHora * 48;

	return Pago;
}

float Trabajador::calcularHorasExtra()
{
	float PagoExtra;
	
	if (horasLab > 48) {
		PagoExtra = (horasLab - 48)*precioHora;
		PagoExtra = PagoExtra * 0.50;
	}
	else {
		PagoExtra = 0;
	}

	return PagoExtra;
}

float Trabajador::calcularAnualidades()
{
	float PagoAno;

	PagoAno = calcularSalarioBase() * (0.05 * anosLaborados);

	return PagoAno;
}

float Trabajador::calcularSalarioBruto()
{
	float PagoBruto;

	PagoBruto = calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades();

	return PagoBruto;
}

float Trabajador::calcularCargas()
{
	float CargasSociales;

	CargasSociales = calcularSalarioBruto()*0.09;

	return CargasSociales;
}

float Trabajador::calcularSalarioNeto()
{
	float PagoNeto;

	PagoNeto = calcularSalarioBruto() - calcularCargas();

	return PagoNeto;
}



const string Trabajador::getID()
{
	return id;
}

int Trabajador::getHorasLab()
{
	return horasLab;
}

float Trabajador::getPrecioHora()
{
	return precioHora;
}

int Trabajador::getAnosLaborados()
{
	return anosLaborados;
}

void Trabajador::setID(const string id)
{
	Trabajador::id = id;
}

void Trabajador::setHorasLab(int horasLab)
{
	Trabajador::horasLab = horasLab;
}

void Trabajador::setPrecioHora(float precioHora)
{
	Trabajador::precioHora = precioHora;
}

void Trabajador::setAnosLaborados(int anosLaborados)
{
	Trabajador::anosLaborados = anosLaborados;
}
