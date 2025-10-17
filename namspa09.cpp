//namspa09.cpp
#include <iostream>
using namespace std;
void exibe();		//protótipo da função exibe()
namespace nivel9
{
	int valor9 = 100;
}
namespace		//namespace anônimo
{
	int valor2 = 200;
}
int main()
{
	cout << "Função main()" << endl;
	cout << "variável valor9 do namespace nivel9: " << nivel9::valor9 << endl;
	cout << "variável valor2 do namespace anônimo: " << valor2 << endl << endl;
        exibe();		//chama a função exibe()
	return 0;
}
void exibe()			//Definiçaõ da função exibe()
{
	cout << "Função exibe()" << endl;
	cout << "variável valor2 do namespace anônimo: " << valor2 << endl;
}
