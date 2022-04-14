#include "Horario.h"

Horario::Horario(){
	hora = 0;
	minuto = 0;
}

void Horario::set_Horario(int hr, int min){
	hora = hr;
	minuto = min;	
}
void Horario::imprimeHorario(){
	cout<<hora<<":"<<minuto<<endl;
}
