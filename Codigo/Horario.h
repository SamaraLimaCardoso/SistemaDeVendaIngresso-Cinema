#ifndef HORARIO_H
#define HORARIO_H
#include <iostream>
using namespace std;

class Horario
{
protected:
	int hora;
	int minuto;
public:
	Horario();
	void set_Horario(int,int);
	void imprimeHorario();
};

#endif
