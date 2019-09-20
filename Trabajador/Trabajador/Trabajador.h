#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Trabajador {
protected:
	string id;
	int horasLab;
	float precioHora;
	int anosLaborados;

public:

	Trabajador();

	Trabajador(string id, int horasLab, float precioHora, int anosLaborados);

	virtual float calcularSalarioBase();

	virtual float calcularHorasExtra();

	virtual float calcularAnualidades();

	virtual float calcularSalarioBruto();

	virtual float calcularCargas();

	virtual float calcularSalarioNeto();

	const string getID();

	int getHorasLab();

	float getPrecioHora();

	int getAnosLaborados();

	void setID(const string id);

	void setHorasLab(int horasLab);

	void setPrecioHora(float precioHora);

	void setAnosLaborados(int anosLaborados);

	string toString();
};
