#include "Lista.h"
// Nombre: Carlos Gonzalez Garita
// Cedula: 604890217
// NRC: 50699
Lista::Lista() 
{
	ppio = NULL;
}
Lista::~Lista() {}

Nodo* Lista::getPpio() 
{ 
	return ppio; 
}

string Lista::toString() const 
{
	stringstream s;
	Nodo* pExt = ppio;
	s << "---------LISTADO DE HILERAS--------" << endl;
	while (pExt != NULL) {
		s << *(pExt->getHilera()) << endl;
		pExt = pExt->getSiguiente();
	}
	s << "----------FIN DEL LISTADO----------" << endl;
	return s.str();
}

// El método trabaja bien, si y únicamente si, todas las palabras empiezan en mayúscula
// o todas empiezan en minúscula. 
// Si se mezclan, el método no funciona correctamente,
// debido a la tabla ASCII, por ejemplo 'Z' < 'a' = true, pero 'z' < 'A' = false.
void Lista::ingresaHilEnOrdenAlfabetico(string* ptrHil) 
{
	// Zona de quiz. Aqu� debe escribir el c�digo del m�todo solicitado.
	// Realizar solo este m�todo, no debe crear m�todos nuevos, 
	// se usa lo que hay.
	Nodo* nuevo = new Nodo(ptrHil, NULL);
	if (ppio == NULL) {
		ppio = nuevo;
	}
	else {
		Nodo* pExt = ppio;
		Nodo* pAnt = NULL;
		while (pExt != NULL && *(pExt->getHilera()) < *ptrHil) {
			pAnt = pExt;
			pExt = pExt->getSiguiente();
		}
		if (pAnt == NULL) {
			nuevo->setSiguiente(ppio);
			ppio = nuevo;
		}
		else if (pExt == NULL) {
			pAnt->setSiguiente(nuevo);
		}
		else {
			nuevo->setSiguiente(pExt);
			pAnt->setSiguiente(nuevo);
		}
	}
}