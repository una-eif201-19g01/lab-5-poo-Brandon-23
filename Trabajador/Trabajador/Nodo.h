#include <ostream>
#include "Trabajador.h"

class Nodo {
	Trabajador trabajador;
	Nodo *siguiente;

public:
	Nodo();

	Nodo(const Trabajador &profesor, Nodo *siguiente);

	virtual ~Nodo();

	const Trabajador &getTrabajador() const;

	void setTrabajador(const Trabajador &profesor);

	Nodo *getSiguiente() const;

	void setSiguiente(Nodo *_siguiente);

	std::string toString();

};
