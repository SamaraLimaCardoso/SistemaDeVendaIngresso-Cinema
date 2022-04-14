#include "Sessao.h"

Sessao::Sessao()
{
	Sala*s2d = new S2D;
	Sala*s3d = new S3D;
	Sala*vip1 = new Vip;
	Sala*Imax1 = new Imax;
}

void Sessao::DefiniHorario(string hora)
{
	this->hora = hora;
}

void Sessao::imprimeDados(string Nome_Filme, int k)
{

	if(Nome_Filme == "Vingadores")
	{
				F1.imprimeFilme();
				cout << "\t\t\t\tHorario: " << hora<<endl;
				switch(k)
				{
				case 0:
					cout<<"\t\t\t\tSala: 2D"<<endl;
					break;
				case 1:
					cout<<"\t\t\t\tSala: 3D"<<endl;
					break;
				case 2:
					cout<<"\t\t\t\tSala: Vip"<<endl;
					break;
				case 3:
					cout<<"\t\t\t\tSala: Imax"<<endl;
					break;
				default:
					break;
				}
				

	}

	else if(Nome_Filme == "Coringa")
	{

				F2.imprimeFilme();
				cout << "\t\t\t\tHorario: " << hora<<endl;
				switch(k)
				{
				case 4:
					cout<<"\t\t\t\tSala: 2D"<<endl;
					break;
				case 5:
					cout<<"\t\t\t\tSala: 3D"<<endl;
					break;
				case 6:
					cout<<"\t\t\t\tSala: Vip"<<endl;
					break;
				case 7:
					cout<<"\t\t\t\tSala: Imax"<<endl;
					break;
				default:
					break;
				}

	}
	else if(Nome_Filme == "Malevola")
	{

				F3.imprimeFilme();
				cout << "\t\t\t\tHorario: " << hora<<endl;
				switch(k)
				{
				case 8:
					cout<<"\t\t\t\tSala: 2D"<<endl;
					break;
				case 9:
					cout<<"\t\t\t\tSala: 3D"<<endl;
					break;
				case 10:
					cout<<"\t\t\t\tSala: Vip"<<endl;
					break;
				case 11:
					cout<<"\t\t\t\tSala: Imax"<<endl;
					break;
				default:
					break;
				}
				
	}
	else if(Nome_Filme == "Toy Story 4")
	{
				F4.imprimeFilme();
				cout << "\t\t\t\tHorario: " << hora<<endl;
				switch(k)
				{
				case 12:
					cout<<"\t\t\t\tSala: 2D"<<endl;
					break;
				case 13:
					cout<<"\t\t\t\tSala: 3D"<<endl;
					break;
				case 14:
					cout<<"\t\t\t\tSala: Vip"<<endl;
					break;
				case 15:
					cout<<"\t\t\t\tSala: Imax"<<endl;
					break;
				default:
					break;
				}
	}
	else if(Nome_Filme == "Homem-Aranha: Longe de Casa")
	{
				F5.imprimeFilme();
				cout << "\t\t\t\tHorario:" << hora<<endl;
				switch(k)
				{
				case 16:
					cout<<"\t\t\t\tSala: 2D"<<endl;
					break;
				case 17:
					cout<<"\t\t\t\tSala: 3D"<<endl;
					break;
				case 18:
					cout<<"\t\t\t\tSala: Vip"<<endl;
					break;
				case 19:
					cout<<"\t\t\t\tSala: Imax"<<endl;
					break;
				default:
					break;
				}
	}else{
		cout<<"3RROR";
	}
}

void Sessao::preencheFilme(Filme F1, Filme F2, Filme F3, Filme F4, Filme F5)
{
	this->F1 = F1; //Vingadores
	this->F2 = F2; //Coringa
	this->F3 = F3; //Malévola
	this->F4 = F4; //Toy Story 4
	this->F5 = F5; //Homem-Aranha: Longe de Casa

}

string Sessao::getHora()
{
	return hora;
}
