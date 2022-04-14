#ifndef S3D_H
#define S3D_H
#include "Sala.h"
#include <vector>
#include <math.h>

class S3D : public Sala
{
protected:
	int nPoltrona;
public:
	S3D();
	void DefineQtdPoltrona(); // Metodo com Prolblem no polt[i][j], ele não executa o loop dentro do for
	bool EscolhePoltrona(string,int*,int ); // Metodo com pProlblem no polt[i][j], ele não entras no teste
	virtual string Nomepoltrona(int, int, int);
	string tipoSala();


};

#endif
