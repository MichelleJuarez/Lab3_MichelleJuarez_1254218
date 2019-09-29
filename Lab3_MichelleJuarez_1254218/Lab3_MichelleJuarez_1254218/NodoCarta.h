#pragma once
#include"Carta.h"
class NodoCarta
{
public:
	NodoCarta(Carta carta);
	~NodoCarta();
public:
	Carta valor;
	NodoCarta* siguiente;
};

