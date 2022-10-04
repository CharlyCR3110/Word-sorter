#include<iostream>
#include<sstream>
using namespace std;
class Nodo {
private:
	string* ptrHilera;
	Nodo* sig;
public:
	Nodo(string* pHilera, Nodo* sigui);
	virtual ~Nodo();
	string* getHilera();
	void setHilera(string* ptr);
	Nodo* getSiguiente();
	void setSiguiente(Nodo* sigui);
};