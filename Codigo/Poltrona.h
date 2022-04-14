#ifndef POLTRONA_H
#define POLTRONA_H

#include <string>
#include <iostream>

using namespace std;

class Poltrona
{
protected:

public:
	string NomePoltrona;
	bool estado; // 0-Livre
	Poltrona();
	void compraPoltrona();

};

#endif
