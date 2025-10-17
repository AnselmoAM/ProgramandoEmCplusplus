//namspa07.cpp
#include <iostream>
using namespace std;
int ano1 = 2001;		//vaeiável global
namespace teste			//criação do namespace teste
{
	int ano2 = 2002;
	int ano1 = 2003;
	void exibe();
}
int main()
{
	cout << "Função main()" << endl;
	cout << "variável global ano1: " << ano1 << endl;
	cout << "variável ano1 do namespace teste: " << teste::ano1 << endl;
	cout << "variável ano2 do namespace teste: " << teste::ano2 << endl << endl;
	teste::exibe();		//Chama a função exibe()
	return 0;
}
void teste::exibe()		//Definição da função exibe()
{
	cout << "Função exibe()" << endl;
	cout << "variável global ano1: " << ::ano1 << endl;
	cout << "variável ano1 do namespace teste: " << ano1 << endl;
	cout << "variável ano2 do namespace teste: " << ano2 << endl;
}

