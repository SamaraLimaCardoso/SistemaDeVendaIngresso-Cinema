#ifndef SESSAO_H
#define SESSAO_H
#include "Filme.h"
#include "Sala.h"
#include "Horario.h"
#include "S3D.h"
#include "S2D.h"
#include "Imax.h"
#include "Vip.h"

class Sessao
{
protected:	
	Filme F1,F2,F3,F4,F5;
	string hora;
public:
	Sessao();
	void DefiniHorario(string);
	void imprimeDados(string, int);
	void preencheFilme(Filme,Filme,Filme,Filme,Filme);
	string getHora();
};

#endif