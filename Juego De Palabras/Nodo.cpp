#include "Nodo.h"
// Nombre: Carlos Gonzalez Garita
// Cedula: 604890217
// NRC: 50699

Nodo::Nodo(string* pHilera, Nodo* sigui)
{
	this->ptrHilera = pHilera;
	this->sig = sigui;
}
Nodo::~Nodo() 
{
	if (ptrHilera != NULL)
		delete ptrHilera;
}
string* Nodo:: getHilera() 
{
	return ptrHilera; 
}
void Nodo::setHilera(string* ptr) 
{
	if (ptrHilera != NULL) delete ptrHilera;
	ptrHilera = ptr;
}
Nodo* Nodo::getSiguiente()
{ 
	return sig; 
}
void Nodo::setSiguiente(Nodo* sigui) 
{
	sig = sigui;
}