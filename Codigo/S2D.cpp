#include "S2D.h"

S2D:: S2D(): Sala()
{
	nPoltrona = 64;
}

void S2D::DefineQtdPoltrona()  // define nPoltrona para cada tipo de sala
{

	int tam = sqrt(nPoltrona);
	string b;
	Polt.resize(5);

	for ( unsigned int j = 0; j < Polt.size(); j++)
	{
		Polt[j].resize(tam);
		for(unsigned int k = 0; k < Polt[j].size(); k++)
		{
			Polt[j][k].resize(tam);
		}
	}

	for (unsigned int i = 0; i < Polt.size(); i++)
	{
		for(unsigned int j = 0; j < Polt[i].size(); j++)
		{
			for(unsigned int k = 0; k < Polt[i][j].size(); k++)
			{

				b = char(49 + k);
				Polt[i][j][k].NomePoltrona = (char)(65 + j) + b;

			}
		}
	}

}

string S2D::tipoSala()
{
	nomeSala = "2D";
	return nomeSala;
}

bool S2D::EscolhePoltrona(string Nome_Poltrona, int *opi, int i)
{
	for( unsigned int j = 0 ; j < Polt[i].size(); j++)
	{
		for( unsigned int k = 0 ; k < Polt[i][j].size(); k++)
		{
			if( Polt[i][j][k].NomePoltrona == Nome_Poltrona)
			{
				cout << endl << "\t\t\t\t"; cout << "Poltrona Escolhida: " << Polt[i][j][k].NomePoltrona << endl;

				Polt[i][j][k].compraPoltrona();

				cout << endl << "\t\t\t\t[1] Meia" << endl
					 << "\t\t\t\t[2] Inteira" << endl;
				cout << "\t\t\t\t>>";
				cin >> *opi;

				return 1;
			}
		}
	}
	return 0;
}
string S2D::Nomepoltrona(int i, int j, int k)
{
	return Polt[i][j][k].NomePoltrona;
}
