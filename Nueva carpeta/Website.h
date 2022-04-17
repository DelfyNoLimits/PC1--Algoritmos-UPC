#pragma once
#include <iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include<fstream>
#include<algorithm>
#include<functional>
#include"listas.h"
using namespace std;
string Sitio;

class sitioWeb {

public:
	string nombreOriginal = "test";


	sitioWeb() {}
	void setNombre() {
		cout << "Ingrese el nombre del sitio web que desea registrar: ";
		cin >> nombreOriginal;
		insertaNodoLista(nombreOriginal+"\n");
		Sitio = nombreOriginal;
	}

	string(*fetNombre)(string) = [](string website) {return website; };
};