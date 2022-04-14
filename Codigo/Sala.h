#ifndef SALA_H
#define SALA_H
#include "Poltrona.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class Sala
{
protected: 
	string nomeSala;
	int nPoltrona;
	vector <vector< vector<Poltrona> > >Polt;	
public:
	Sala();
    string getSala();
	virtual void DefineQtdPoltrona(); 
	virtual string tipoSala();
	virtual string Nomepoltrona(int,int,int);
	virtual bool EscolhePoltrona(string,int*,int );
	friend class Ingresso;
	
};

#endif

