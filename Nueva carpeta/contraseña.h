#pragma once
#include <iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include<fstream>
#include<algorithm>
#include<functional>
#include<vector>
#include "Website.h"
#include "listas.h"



class contraseņa :public sitioWeb {
private:
	char a;
	string b;
	vector<string>VecCon;
public:
	contraseņa() {}
	string repetidor;
	vector<char> vectorLetrasAleatorias;
	template <class t>
	t creador(int n) {

		if (n == 0) {
			n = 1;
		}
		else {

			char z = 97 + rand() % (122 - 97);

			vectorLetrasAleatorias.push_back(z);
			creador<string>(n - 1);

		}
		for (int i = 0; i < n; i++) {
			repetidor += vectorLetrasAleatorias[i];

		}
		return repetidor;
	}

	//string crear(int length) {

	//	for (int i = 0; i < length; i++) {
	//		a = 97 + rand() % (122 - 97);
	//		b += a;
	//	}
	//	return b;
	//}
	//
	template <class t>
	t generar(int leng) {
		ofstream salida;
		ifstream entrada;
		
		string contraseņa;
		short opcion;
		string ContraManual;
		cout << "ingrese una opcion"<<endl;
		cout << "[1] Generar contraseņa" << endl;
		cout << "[2] Insertar contraseņa" << endl;
		cout << "[3] Imprimir contraseņas de este sitio" << endl;
		cout << "[4] Imprimir sitios web" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:

			
				contraseņa = creador<string>(leng);
				VecCon.push_back(contraseņa);
				cout << "La contraseņa que se genero fue: " << contraseņa;

			
			salida.open((fetNombre(Sitio) + ".txt"), fstream::app);
			if (salida.is_open()) {


				salida << "Contraseņa : " << contraseņa << endl;

				salida.close();

			}
			else {
				cout << "Error al guardar datos"<<endl;
			}
			break;
		case 2:
			
			
			salida.open((fetNombre(Sitio) + ".txt"), fstream::app);
			
			cout << "Ingrese una contraseņa:" << endl;
			cin >> ContraManual;
			VecCon.push_back(ContraManual);
			if (salida.is_open()) {


				salida << "Contraseņa: " << ContraManual << endl;

				salida.close();

			}
			else {
				cout << "Error al guardar datos"<<endl;
			}
			break;
		case 3:

			for (int i = 0; i < VecCon.size(); i++) {
				cout <<"Contraseņas: "<< VecCon[i] << endl;
			}
			break;
		case 4:
			imprimeLista();
			break;
		
		}



	}

};