#include <ostream>
#include "Nodo.h"


class ListaTrabajadores {
	Nodo *primero;
	Nodo *actual;

public:
	ListaTrabajadores();

	virtual ~ListaTrabajadores();

	void insertarInicio(const Trabajador& _profesor);
	void insertarFinal(const Trabajador& _profesor);
	bool eliminarInicio();
	bool eliminarFinal();
	int totalNodos();
	bool listaVacia();

	Nodo *getPrimero() const;

	void setPrimero(Nodo *primero);

	Nodo *getActual() const;

	void setActual(Nodo *actual);

	std::string toString();
};
