#ifndef FILME_H
#define FILME_H
#include <string>
#include <iostream>
using namespace std;

class Filme
{
protected:
	string nome, genero, diretor, sinopse, tipo;
	int duracao, classificacao; // DURAÇÃO É EM MINUTOS
public:
	Filme();
	Filme(string, string, string, string, string, int, int);
	void imprimeFilme(); 
	string GetNomeFilme();
};

#endif
