// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/*
template<typename T> class Cola;

template<typename T>
class Nodo {
	friend Cola<T>;
private:
	T Valor;
	Nodo<T>* Siguiente;

public:
	Nodo(T _Valor, Nodo<T>* _Siguiente = nullptr) {
		Valor = _Valor;
		Siguiente = _Siguiente;
	}
};


template<typename T>
class Cola
{
private:
	Nodo<T>* Primero;
	Nodo<T>* Ultimo;
public:
	Cola() : Primero(nullptr), Ultimo(nullptr) {}
	~Cola();
	void Push(T _valor);
	T Pop();
};

template<typename T>
Cola<T>::~Cola() {
	while (Primero) {
		Pop();
	}
}

template<typename T>
void Cola<T>::Push(T _Valor) {
	Nodo<T>* NodoNuevo;
	NodoNuevo = new Nodo<T>(_Valor);
	//Nodo<T>* NodoNuevo = new Nodo<T>(_Valor);

	if (Ultimo) {
		Ultimo->Siguiente = NodoNuevo;
	}
	Ultimo = NodoNuevo;

	if (!Primero) {
		Primero = NodoNuevo;
	}
}

template<typename T>
T Cola<T>::Pop() {
	Nodo<T>* NodoActual;
	T ValorNodo;
	NodoActual = Primero;
	if (!NodoActual) {
		return 0;
	}
	Primero = NodoActual->Siguiente;
	ValorNodo = NodoActual->Valor;
	delete NodoActual;

	if (!Primero) {
		Ultimo = nullptr;
	}

	return ValorNodo;
}
*/
