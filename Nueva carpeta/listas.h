#pragma once
#include<iostream>
#include<string>
using namespace std;

struct Nodo {
	string dato;
	Nodo* siguiente;//dirección de nodo siguiente

};
Nodo*lista;
void insertaNodoLista(string d) {

	Nodo* nodoNuevo = new Nodo();

	nodoNuevo->dato = d;

	//lista=NULL

	Nodo * aux1 = lista;

	Nodo *aux2 = nullptr;


	while ((aux1 != nullptr))
	{
		aux2 = aux1;

		aux1 = aux1->siguiente;
	}


	//lista esta vacia

	if (aux1 == lista) {
		lista = nodoNuevo;
	}

	else //si hubo un elemento en la lista
	{
		aux2->siguiente = nodoNuevo;
	}
	nodoNuevo->siguiente = aux1;
}

void imprimeLista() {
	Nodo*actual = new Nodo();
	actual = lista;
	while (actual != nullptr) {
		cout << actual->dato << " ";
		actual = actual->siguiente;
	}
}
