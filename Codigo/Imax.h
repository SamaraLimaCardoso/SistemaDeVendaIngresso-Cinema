#ifndef EMAX_H
#define EMAX_H
#include "Sala.h"
#include <math.h>

class Imax : public Sala
{
protected:
	int nPoltrona;
public:
	Imax();
	void DefineQtdPoltrona(); // Metodo com Prolblem no polt[i][j], ele não executa o loop dentro do for
	virtual string Nomepoltrona(int, int,int);
	bool EscolhePoltrona(string,int*,int ); // Metodo com pProlblem no polt[i][j], ele não entras no teste
	string tipoSala();

};

#endif
