#ifndef S2D_H
#define S2D_H
#include "Sala.h"

class S2D : public Sala
{
protected:
	int nPoltrona;
public:
	S2D();
	void DefineQtdPoltrona(); // Metodo com Prolblem no polt[i][j], ele n�o executa o loop dentro do for
	bool EscolhePoltrona(string,int*,int ); // Metodo com pProlblem no polt[i][j], ele n�o entras no teste
	string tipoSala();
	virtual string Nomepoltrona(int,int,int);
};

#endif
