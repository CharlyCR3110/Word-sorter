#include "Lista.h"
// Nombre: Carlos Gonzalez Garita
// Cedula: 604890217
// NRC: 50699

int main() { // Modo-1
	int op;
	string hil;
	string* hilPtr = NULL;
	cout << endl << endl;
	cout << "Creando un contenedor tipo Lista." << endl;
	Lista* lis = new Lista();
	system("pause.");
	system("cls");
	do {
		cout << "-----------TRABAJANDO CON PALABRAS--------------" << endl;
		cout << "------------------ O HILERAS -------------------" << endl;
		cout << endl;
		cout << "--------------------MENU------------------------" << endl;
		cout << " 1 - Ingresar palabra en orden " << endl;
		cout << " 2 - Ver todas las palabras " << endl;
		cout << " 3 - Salir " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " Ingrese la opcion: ";
		cin >> op;
		cout << endl << endl;
		switch (op) {
		case 1: {
			cout << " Ingresar palabra en Contenedor en orden " << endl;
			cout << "------Creando una palabra o hilera---------" << endl;
			cout << "Escriba una palabra: ";
			cin >> hil;
			hilPtr = new string(hil); // Se crea el objeto din�mico string*
			cout << "- Ingresando Palabra Ordenadamente -" << endl;
			lis->ingresaHilEnOrdenAlfabetico(hilPtr);
			cout << "LISTO: Palabra ingresada Alfabeticamente." << endl;
		}
			  break;
		case 2: {
			cout << " Ver todas las palabras del contenedor Lista " << endl;
			cout << lis->toString() << endl;
		}
			  break;
		case 3: {
			cout << " M U C H A S G R A C I A S " << endl;
		}
			  break;

		default: cout << "ERROR EN OPCION: Ingrese opcion de 1 a 3." << endl;
		};
		system("pause");
		system("cls");
	} while (op != 3);
	return 0;
}
