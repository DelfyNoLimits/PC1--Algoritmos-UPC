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



class contrase�a :public sitioWeb {
private:
	char a;
	string b;
	vector<string>VecCon;
public:
	contrase�a() {}
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
		
		string contrase�a;
		short opcion;
		string ContraManual;
		cout << "ingrese una opcion"<<endl;
		cout << "[1] Generar contrase�a" << endl;
		cout << "[2] Insertar contrase�a" << endl;
		cout << "[3] Imprimir contrase�as de este sitio" << endl;
		cout << "[4] Imprimir sitios web" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:

			
				contrase�a = creador<string>(leng);
				VecCon.push_back(contrase�a);
				cout << "La contrase�a que se genero fue: " << contrase�a;

			
			salida.open((fetNombre(Sitio) + ".txt"), fstream::app);
			if (salida.is_open()) {


				salida << "Contrase�a : " << contrase�a << endl;

				salida.close();

			}
			else {
				cout << "Error al guardar datos"<<endl;
			}
			break;
		case 2:
			
			
			salida.open((fetNombre(Sitio) + ".txt"), fstream::app);
			
			cout << "Ingrese una contrase�a:" << endl;
			cin >> ContraManual;
			VecCon.push_back(ContraManual);
			if (salida.is_open()) {


				salida << "Contrase�a: " << ContraManual << endl;

				salida.close();

			}
			else {
				cout << "Error al guardar datos"<<endl;
			}
			break;
		case 3:

			for (int i = 0; i < VecCon.size(); i++) {
				cout <<"Contrase�as: "<< VecCon[i] << endl;
			}
			break;
		case 4:
			imprimeLista();
			break;
		
		}



	}

};