#include "Ingresso.h"

Ingresso::Ingresso()
{
	valor = 0;
	tipo = "";
	arrecadado = 0;
	Iimax = 0;
	Ivip = 0;
	I3d = 0;
	I2d = 0;
	Mimax = 0;
	Mvip = 0;
	M3d = 0;
	M2d = 0;
}
void Ingresso::setTipo( string tipo)  // adicionar ao carrinho
{
	this->tipo = tipo;
}
int Ingresso::ajusteValor()  // para cada tipo de sala usando classe friend
{
	
	if( teste == "VIP")
	{
		if(tipo == "meia")
		{
			valor = 21;
			return 21;
		}
		else
		{
			valor = 42;
			return 42;
		}
	}
	else if(teste == "Imax")
	{
		if(tipo == "meia")
		{
			valor = 18;
			return 18;
		}
		else
		{
			valor = 36;
			return 36;
		}
	}
	else if(teste == "3D")
	{
		if(tipo == "meia")
		{
			valor = 15;
			return 15;
		}
		else
		{
			valor = 30;
			return 30;
		}
	}
	else if(teste == "2D")
	{
		if(tipo == "meia")
		{
			valor = 12;
			return 12;
		}
		else
		{
			valor = 24;
			return 24;
		}
	}else{
		return 0;
	}
}
int Ingresso::getArrecadado()
{
	arrecadado = (Mvip * 21) + (Mimax * 18) + (M3d * 15) + (M2d * 12) + (Ivip * 42) + (Iimax * 36) + (I3d * 30) + (I2d * 24);
	return arrecadado;
}

void Ingresso::setTeste(string teste){
	this->teste=teste;
}

void Ingresso::contador_ingVendidos()
{
	if(teste == "vip")
	{
		if(tipo == "meia")
		{
			Mvip++;
		}
		else
		{
			Ivip++;
		}
	}
	else if(teste == "IMAX")
	{
		if(tipo == "meia")
		{
			Mimax++;
		}
		else
		{
			Iimax++;
		}
	}
	else if(teste == "3D")
	{
		if(tipo == "meia")
		{
			M3d++;
		}
		else
		{
			I3d++;
		}
	}
	else if(teste == "2D")
	{
		if(tipo == "meia")
		{
			M2d++;
		}
		else
		{
			I2d++;
		}
	}
}

void Ingresso::atualizaIngressos(int *pIimax, int *pIvip, int *pI3d, int *pI2d, int *pMimax, int *pMvip, int *pM3d, int *pM2d)
{
	*pIimax = Iimax;
	*pIvip = Ivip;
	*pI3d = I3d;
	*pI2d = I2d;
	*pMimax = Mimax;
	*pMvip = Mvip;
	*pM3d = M3d;
	*pM2d = M2d;
}