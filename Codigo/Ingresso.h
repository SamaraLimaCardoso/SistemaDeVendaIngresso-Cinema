#ifndef INGRESSO_H
#define INGRESSO_H
#include "Poltrona.h"
#include "Sala.h"


class Ingresso : public Poltrona
{
protected:
	float valor;
	string tipo,teste;
	int Iimax,Ivip,I3d,I2d,Mimax,Mvip,M3d,M2d; // contador para vendas
	float arrecadado;
public:
	Ingresso();
	void setTipo(string); // adicionar ao carrinho
	int ajusteValor(); // para cada tipo de sala usando classe friend
	int getArrecadado();
	void contador_ingVendidos();
	void setTeste(string);
	void atualizaIngressos(int *, int *, int *, int *, int *, int *, int *, int *);
	friend string Sala::getSala();
	
};

#endif
