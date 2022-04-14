#ifndef VIP_H
#define VIP_H
#include "Sala.h"

class Vip : public Sala
{
protected:
	int nPoltrona;
public:
	Vip();
	void DefineQtdPoltrona(); // Metodo com Prolblem no polt[i][j], ele não executa o loop dentro do for
	virtual string Nomepoltrona(int, int, int);
	string tipoSala();
	bool EscolhePoltrona(string,int*,int );	 // Metodo com pProlblem no polt[i][j], ele não entras no teste

};

#endif
