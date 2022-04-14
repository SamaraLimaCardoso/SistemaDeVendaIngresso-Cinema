case 2:
					teste = d3s.tipoSala();

					cout << "\t\t\t\tESCOLHA A POLTRONA" << endl;
					cout << endl << endl << endl << "\t_________________________________________________________________________________\n\n" << endl << endl;
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
						cout << endl << "\t\t\t\tDigite a Poltrona Escolhida" << endl;
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
							if(erro)
							{
								repetir = 1;
								cout << "Poltrona Ocupada!!" ;
							}
						}
					}
					while(repetir);