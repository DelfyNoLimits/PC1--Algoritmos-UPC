#include <iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include<fstream>
#include<algorithm>
#include<functional>
#include"contrase�a.h"
#include"Usuario.h"

using namespace std;
//string Sitio;



int main() {
	setlocale(LC_ALL, "Spanish");
	srand(time(NULL));
	contrase�a contra = contrase�a();
	usuario uwu = usuario();
	sitioWeb site = sitioWeb();
	short opcion=0;
	

	cout << "Bienvenido a SafestWord" << endl;



	// listas y vectores
	do {
		
		cout << "MENU DE OPCIONES" << endl;
		cout << "[1] Registre un nuevo sitio web o vea contrase�as almacenadas del mismo." << endl;
		cout << "[2] Salir" << endl;
		cin >> opcion;
		
		if (opcion == 1) {
			site.setNombre();
			uwu.creador<string>(4);
			uwu.generar<void>(7);
			contra.creador<string>(4);
			contra.generar<void>(7);
			cout << endl;
		}
		
	} while (opcion != 2);
	//hacer que el programa se repita hasta que se ingrese una opcion
	cout << "Hasta pronto." << endl;
	cout << endl;
	system("pause");
}

