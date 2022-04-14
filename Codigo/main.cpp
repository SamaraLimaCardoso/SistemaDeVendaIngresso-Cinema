#include "S3D.h"
#include "S2D.h"
#include "Filme.h"
#include "Imax.h"
#include "Ingresso.h"
#include "Sessao.h"
#include "Poltrona.h"
#include "Horario.h"
#include "Sala.h"
#include "Vip.h"
#include <stdlib.h>
#include <fstream>
#include <string>

void TV(int Polegadas)
{
	cout << "\t _________________________________________________________________________________\n";
	for(int i = 0; i < Polegadas; i++)
		cout << "\t|                                                                                |\n";
	cout << "\t|________________________________________________________________________________|\n" << endl << endl;
}
int main()
{
	int opcao, opi, k, i, j, repetir, qtding = 0;
	Filme F1("Vingadores", "Acao", "Anthony & Joe Russo", "Luta final contra Thanos", "legendado", 120, 14);
	Filme F2("Coringa", "Drama", "Todd Phillips", "O comediante Arthur se transfomando no Coringa", "legendado", 80, 12);
	Filme F3("Malevola", "Ficcao cientifica", "Joachim Ronning", "Sequencia do sucesso Malevola de 2014", "dublado", 97, 16);
	Filme F4("Toy Story 4", "Aventura", "Josh Cooley", "Woody e seus amigos embarcam em uma viagem ", "dublado", 90, 16);
	Filme F5("Homem-Aranha: Longe de Casa", "Aventura", "Jon Watts", "Peter Parker em passeio na Europa", "legendado/dublado", 100, 10);
	Sessao S1[21];
	Ingresso I1;
	string Nome_Poltrona, teste, Nome_Filme, tipo, time;
	S2D d2s_;
	S3D d3s;
	Vip vip1;
	Imax imax1;
	ofstream ingressodocliente("ingresso.txt");
	ofstream cf("fechacaixa.txt");
	int iiimax = 0, iivip = 0, ii3d = 0, ii2d = 0, mmimax = 0, mmvip = 0, mm3d = 0, mm2d = 0;


	d2s_.DefineQtdPoltrona();
	d3s.DefineQtdPoltrona();
	vip1.DefineQtdPoltrona();
	imax1.DefineQtdPoltrona();

	while(opcao != 9)
	{
		opcao = 0;
		cout << "\t\t\t\t************************************************** " << endl;
		cout << "\t\t\t\t**" << "\t\t MENU CINESALEM \t\t" << "**" << endl;
		cout << "\t\t\t\t************************************************** " << endl;
		cout << "\t\t\t\t** 1- Vender ingressos \t\t\t\t" << "**" << endl;
		cout << "\t\t\t\t** 2- Controle de vendas \t\t\t" << "**" << endl;
		cout << "\t\t\t\t** 9- Sair \t\t\t\t\t" << "**" << endl;
		cout << "\t\t\t\t************************************************** " << endl;
		cout << endl << "\t\t\t\t\t\t     >>";
		cin >> opcao;
		//system("pause");
		system("cls");

		switch(opcao)
		{
		case 1:
			opcao = 0;
			//imprime Filme
			cout << "\t\t\t\t************************************************** " << endl;
			cout << "\t\t\t\t**" << "\t\t     FILMES     \t\t" << "**" << endl;
			cout << "\t\t\t\t************************************************** " << endl;
			F1.imprimeFilme();
			cout << "\t\t\t\t************************************************** " << endl;
			F2.imprimeFilme();
			cout << "\t\t\t\t************************************************** " << endl;
			F3.imprimeFilme();
			cout << "\t\t\t\t************************************************** " << endl;
			F4.imprimeFilme();
			cout << "\t\t\t\t************************************************** " << endl;
			F5.imprimeFilme();
			cout << "\t\t\t\t************************************************** " << endl;
			cout << endl << "\t\t\t\t\t\tESCOLHA O FILME";
			cout << endl << "\t\t\t\t\t\t     >>";
			cin >> opcao;
			//system("pause");
			system("cls");

//###################### DEFINIÇÃO DO HORARIO #####################################################################

			//Vingadores
			S1[0].DefiniHorario("15:00 hrs");
			S1[1].DefiniHorario("17:00 hrs");
			S1[2].DefiniHorario("19:00 hrs");
			S1[3].DefiniHorario("21:00 hrs");

			//Coringa
			S1[4].DefiniHorario("17:00 hrs");
			S1[5].DefiniHorario("19:00 hrs");
			S1[6].DefiniHorario("21:00 hrs");
			S1[7].DefiniHorario("15:00 hrs");


			//Malévola
			S1[8].DefiniHorario("19:00 hrs");
			S1[9].DefiniHorario("21:00 hrs");
			S1[10].DefiniHorario("23:00 hrs");
			S1[11].DefiniHorario("17:00 hrs");


			//Toy Story 4
			S1[12].DefiniHorario("21:00 hrs");
			S1[13].DefiniHorario("15:00 hrs");
			S1[14].DefiniHorario("17:00 hrs");
			S1[15].DefiniHorario("23:00 hrs");


			//Homem-Aranha: Longe de Casa
			S1[16].DefiniHorario("23:00 hrs");
			S1[17].DefiniHorario("Não disponivel");
			S1[18].DefiniHorario("15:00 hrs");
			S1[19].DefiniHorario("19:00 hrs");

			for( i = 0; i < 19; i++) //sesscao recebe filmes
			{
				S1[i].preencheFilme(F1, F2, F3, F4, F5);
			}
//###########################################################################################

			switch(opcao)
			{
			case 1:
				opcao = 0;
				Nome_Filme = F1.GetNomeFilme();
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << "\t\t\t\t\t\t\t  SESSAO\t\t\t  " << endl;
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				k = 0;
				for(i = 0; i < 2; i++)//Imprime sessao
				{
					cout << "\n";
					for(j = 0; j < 2; j++)
					{
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						S1[k].imprimeDados(Nome_Filme, k);
						k++;
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

					}

				}

				cout << endl << endl << "\t\t\t\t\t\tESCOLHA A SESSAO";
				cout << endl << "\t\t\t\t\t\t     >>";
				cin >> opcao;
				//system("pause");
				system("cls");


				switch(opcao)
				{


				case 1:
					teste = d2s_.tipoSala();
					do
					{

						do
						{
							////cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
							TV(5);
							for(int n = 0; n < 8 ; n++)
							{
								cout << "\t\t\t";
								for(int m = 0; m < 8 ; m++)
								{
									cout << "[" << d2s_.Nomepoltrona(0, n, m) << "]  ";
								}
								cout << endl;
							}
							cout << endl << "\t\t\t\tDigite a Poltrona Escolhida";
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 0))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									system("cls");
									repetir = 1;
									cout << "Poltrona Invalida!!" << endl;
								}
							}
						}
						while(repetir);

						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);
					

						time = S1[0].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;

						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				case 2:
					teste = d3s.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d3s.Nomepoltrona(0, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d3s.EscolhePoltrona(Nome_Poltrona, &opi, 0))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								repetir = 1;
								if(erro)
									cout << "Poltrona Invalida!!" ;

							}
						}
						while(repetir);

						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[1].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << I1.ajusteValor() << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;

						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 3:
					teste = vip1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 6 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 6 ; m++)
							{
								cout << "[ " << vip1.Nomepoltrona(0, n, m) << " ]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(vip1.EscolhePoltrona(Nome_Poltrona, &opi, 0))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[2].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 4:
					teste = imax1.tipoSala();
					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(16);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << imax1.Nomepoltrona(0, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(imax1.EscolhePoltrona(Nome_Poltrona, &opi, 0))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[3].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;

						break;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
				default:
					break;
				}


				break;

			case 2:
				opcao = 0;
				Nome_Filme = F2.GetNomeFilme();
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << "\t\t\t\t\t\t\t  SESSAO" << endl;
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				k = 4;
				for(int i = 0; i < 2; i++)
				{
					cout << endl;
					for(int j = 0; j < 2; j++)
					{
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						S1[k].imprimeDados(Nome_Filme, k);
						k++;
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					}
				}

				cout << endl << endl << "\t\t\t\t\t\tESCOLHA A SESSAO" << endl;
				cout << endl << "\t\t\t\t\t\t     >>";
				cin >> opcao;
				//system("pause");
				system("cls");


				switch(opcao)
				{


				case 1:
					teste = d2s_.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d2s_.Nomepoltrona(1, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 1))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[4].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 2:
					teste = d3s.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d3s.Nomepoltrona(1, n, m) << "]  ";
							}
							cout << endl;
						}

						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 0))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[5].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				case 3:
					teste = vip1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 6 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 6 ; m++)
							{
								cout << "[ " << vip1.Nomepoltrona(1, n, m) << " ]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(vip1.EscolhePoltrona(Nome_Poltrona, &opi, 1))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[6].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 4:
					teste = imax1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << imax1.Nomepoltrona(1, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(imax1.EscolhePoltrona(Nome_Poltrona, &opi, 1))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[7].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				default:
					break;
				}
				break;
			case 3:
				opcao = 0;
				Nome_Filme = F3.GetNomeFilme();
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << "\t\t\t\t\t\t\t  SESSAO" << endl;
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				k = 8;
				for(int i = 0; i < 2; i++)
				{
					for(int j = 0; j < 2; j++)
					{
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						S1[k].imprimeDados(Nome_Filme, k);
						k++;
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					}
				}

				cout << endl << endl << "\t\t\t\t\t\tESCOLHA A SESSAO" ;
				cout << endl << "\t\t\t\t\t\t     >>";
				cin >> opcao;
				//system("pause");
				system("cls");

				switch(opcao)
				{


				case 1:
					teste = d2s_.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d2s_.Nomepoltrona(2, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 2))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();

						time = S1[8].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 2:
					teste = d3s.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d3s.Nomepoltrona(2, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d3s.EscolhePoltrona(Nome_Poltrona, &opi, 2))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[9].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 3:
					teste = vip1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 6 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 6 ; m++)
							{
								cout << "[ " << vip1.Nomepoltrona(2, n, m) << " ]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(vip1.EscolhePoltrona(Nome_Poltrona, &opi, 2))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[10].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 4:
					teste = imax1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << imax1.Nomepoltrona(2, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(imax1.EscolhePoltrona(Nome_Poltrona, &opi, 2))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[11].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				default:
					break;
				}
				break;

			case 4:
				opcao = 0;
				Nome_Filme = F4.GetNomeFilme();
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << "\t\t\t\t\t\t\t  SESSAO" << endl;
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				k = 12;
				for(int i = 0; i < 2; i++)
				{
					for(int j = 0; j < 2; j++)
					{
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						S1[k].imprimeDados(Nome_Filme, k);
						k++;
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					}
				}

				cout << endl << endl << "\t\t\t\t\t\tESCOLHA A SESSAO" << endl;
				cout << endl << "\t\t\t\t\t\t     >>";
				cin >> opcao;
				//system("pause");
				system("cls");


				switch(opcao)
				{


				case 1:
					teste = d2s_.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d2s_.Nomepoltrona(3, n, m) << "]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 3))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[12].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 2:
					teste = d3s.tipoSala();
					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d3s.Nomepoltrona(3, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d3s.EscolhePoltrona(Nome_Poltrona, &opi, 3))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[13].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 3:
					teste = vip1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 6 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 6 ; m++)
							{
								cout << "[ " << vip1.Nomepoltrona(3, n, m) << " ]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(vip1.EscolhePoltrona(Nome_Poltrona, &opi, 3))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[14].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 4:
					teste = imax1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << imax1.Nomepoltrona(3, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(imax1.EscolhePoltrona(Nome_Poltrona, &opi, 3))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[15].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				default:
					break;
				}
				break;

			case 5:
				opcao = 0;
				Nome_Filme = F5.GetNomeFilme();
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << "\t\t\t\t\t\t\t  SESSAO" << endl;
				cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				k = 16;
				for(int i = 0; i < 2; i++)
				{
					for(int j = 0; j < 2; j++)
					{
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
						S1[k].imprimeDados(Nome_Filme, k);
						k++;
						cout << "\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					}
				}

				cout << endl << endl << "\t\t\t\t\t\tESCOLHA A SESSAO" << endl;
				cout << endl << "\t\t\t\t\t\t     >>";
				cin >> opcao;
				//system("pause");
				system("cls");

				switch(opcao)
				{


				case 1:
					teste = d2s_.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d2s_.Nomepoltrona(4, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 4))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[16].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 2:
					teste = d3s.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 8 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 8 ; m++)
							{
								cout << "[" << d3s.Nomepoltrona(4, n, m) << "]  ";
							}
							cout << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(d2s_.EscolhePoltrona(Nome_Poltrona, &opi, 4))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[17].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;
						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 3:
					teste = vip1.tipoSala();

					do
					{
						//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
						TV(9);
						for(int n = 0; n < 6 ; n++)
						{
							cout << "\t\t\t";
							for(int m = 0; m < 6 ; m++)
							{
								cout << "[ " << vip1.Nomepoltrona(4, n, m) << " ]   ";
							}
							cout << endl << endl;
						}
						do
						{
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(vip1.EscolhePoltrona(Nome_Poltrona, &opi, 4))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[18].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;

						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;

				case 4:
					teste = imax1.tipoSala();

					do
					{
						do
						{
							system("cls");
							//cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
							TV(30);
							for(int n = 0; n < 8 ; n++)
							{
								cout << "\t\t\t";
								for(int m = 0; m < 8 ; m++)
								{
									cout << "[" << imax1.Nomepoltrona(4, n, m) << "]  ";
								}
								cout << endl;
							}
							cout << endl << "\t\t\t\tDigite a poltrona Escolhida" << endl;
							cout << endl << "\t\t\t\t>>";
							cin >> Nome_Poltrona;
							try
							{
								if(imax1.EscolhePoltrona(Nome_Poltrona, &opi, 4))
									repetir = 0;
								else
									throw(1);
							}
							catch(int erro)
							{
								if(erro)
								{
									repetir = 1;
									cout << "Poltrona Invalida!!" ;
								}
							}
						}
						while(repetir);
						if(opi == 1)
						{
							tipo = "meia";
						}
						else
						{
							tipo = "inteira";
						}
						I1.setTipo(tipo);
						I1.setTeste(teste);
						I1.ajusteValor();
						I1.contador_ingVendidos();
						I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

						time = S1[19].getHora();

						ingressodocliente << "----INGRESSO-----" << endl << endl
										  << "FILME: " << Nome_Filme << endl
										  << "SALA: " << teste << endl
										  << "POLTRONA: " << Nome_Poltrona << endl << "SESSAO: " << time << endl << endl
										  << "INGRESSO: " << tipo << endl
										  << "VALOR TOTAL: " << "R$" << I1.ajusteValor() << ",00" << endl << endl
										  << "OBRIGADA E BOM FILME!" << endl << endl;

						cout << endl << "\t\t\t\tDeseja Comprar outro Ingresso?" << endl
							 << "\t\t\t\t[1] Sim" << endl
							 << "\t\t\t\t[0] Nao" << endl;
						cout << "\t\t\t\t>>";
						cin >> qtding;
						system("cls");
					}
					while(qtding == 1);
					break;
				default:
					break;
				}
				break;
			default:
				break;

			}
			system("cls");
			//system("pause");
			break;

		case 2:
			opcao = 0;
			I1.atualizaIngressos(&iiimax, &iivip, &ii3d, &ii2d, &mmimax, &mmvip, &mm3d, &mm2d);

			cf << "\t-INGRESSOS VENDIDOS-" << endl << endl
			   << "\tIMAX: " << iiimax << " inteira\t" << mmimax << " meia" << endl
			   << "\tVIP: " << iivip << " inteira\t" << mmvip << " meia" << endl
			   << "\t3D: " << ii3d << " inteira\t" << mm3d << " meia" << endl
			   << "\t2D: " << ii2d << " inteira\t" << mm2d << " meia" << endl << endl
			   << "\tVALOR ARRECADADO: " << "R$ " << I1.getArrecadado() << ",00" << endl;

			cf.close();

			break;
		default:
			break;
		}
	}

}

