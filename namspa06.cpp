//namspa06.cpp
#include <iostream>
using namespace std;
int ano1 = 2001;		//variável global
namespace teste			//Criação do namespace teste
{
	int ano2 = 2002;
	int ano1 = 2003;
	void exibe();
}
int main()
{
	cout << "variável global ano1: " << ano1 << endl;
	cout << "variável ano1 do namespace teste: " << teste::ano1 << endl;
	cout << "variável ano2 do namespace teste: " << teste::ano2 << endl;
	return 0;
}
