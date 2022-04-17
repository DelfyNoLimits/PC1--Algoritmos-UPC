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
#include"listas.h"

class usuario :public sitioWeb {

private:
	vector<string>VecUsu;
	char a;
	string b;
public:
	usuario() {}
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
	template<typename t>
	t generar(int leng) {
		ofstream salida;
		ifstream entrada;
		
		string usuario;//string
		short opcion;//short
		string UsuarioManual;
		//
		
		cout << "ingrese una opcion"<< endl;
		cout << "[1] Generar usuario." << endl;
		cout << "[2] Insertar usuario." << endl;
		cout << "[3] Imprimir usuarios." << endl;
		cout << "[4] Imprimir sitios web registrados" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
				usuario = creador<string>(leng);
				VecUsu.push_back(usuario);
				cout << "El Usuario que se genero fue: " << usuario;
				
				cout << endl;

			salida.open((fetNombre(Sitio) + ".txt"), std::ofstream::out | std::ofstream::trunc);
			if (salida.is_open()) {

				salida << "Usuario: " << usuario << endl;

				salida.close();

			}
			else {
				cout << "Error al guardar datos"<<endl;
			}
			break;
		case 2:
		
			salida.open((fetNombre(Sitio) + ".txt"), std::ofstream::out | std::ofstream::trunc);
			cout << "Ingrese un usuario:" << endl;
			cin >> UsuarioManual;
			VecUsu.push_back(UsuarioManual);
			if (salida.is_open()) {
				salida << "Usuario: " << UsuarioManual << endl;				
				salida.close();
			}
			else {
				cout << "Error al guardar datos";
			}
			break;
		case 3:
			for (int i = 0; i < VecUsu.size(); i++) {
				cout <<"Usuarios: "<< VecUsu[i] << endl;
			}
			break;
		case 4:
			imprimeLista();
			break;
		
		
		}



		
	}

};

