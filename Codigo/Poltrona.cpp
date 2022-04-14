#include "Poltrona.h"

Poltrona::Poltrona()
{
	NomePoltrona="";
	estado=0;
}
void Poltrona::compraPoltrona()
{
	if(estado){
		cout<<"OCUPADA";
	}else{
		
		estado=1;
		NomePoltrona="--";
	}
}


