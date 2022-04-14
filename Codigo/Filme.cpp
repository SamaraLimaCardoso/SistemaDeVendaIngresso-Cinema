#include "Filme.h"

Filme::Filme()
{
	nome = "nome indefinido";
	genero = "genero indefinido";
	diretor = "diretor indefinido";
	sinopse = "sinopse indefinido";
	tipo = "tipo indefinido";
	duracao = 0;
	classificacao = 0;
}
Filme::Filme(string nome, string genero, string diretor, string sinopse, string tipo, int duracao, int classificacao)
{
	this-> nome = nome;
	this-> genero = genero;
	this-> diretor = diretor;
	this-> sinopse = sinopse;
	this-> tipo = tipo;
	this-> duracao = duracao;
	this-> classificacao = classificacao;
}
string Filme::GetNomeFilme()
{
	return nome ;
}
void Filme::imprimeFilme()
{
	
	cout << "\t\t\t\tFilme : " << nome << endl;
	cout << "\t\t\t\tGenero: " << genero << endl;
	cout << "\t\t\t\tDirecao: " << diretor << endl;
	cout << "\t\t\t\tSinopse: " << sinopse << endl;
	cout << "\t\t\t\tTipo: " << tipo << endl;
	cout << "\t\t\t\tDuracao: " << duracao << " minutos" << endl;
	cout << "\t\t\t\tClassificacao: " << classificacao << " anos"<<endl;
}
