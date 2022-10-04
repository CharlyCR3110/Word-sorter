#include "Nodo.h"
class Lista {
private:
	Nodo* ppio;
public:
	Lista();
	virtual ~Lista();
	Nodo* getPpio();
	string toString() const;
	void ingresaHilEnOrdenAlfabetico(string* ptrHil);
};