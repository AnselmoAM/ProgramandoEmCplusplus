//classm01.cpp
#include <iostream>
using namespace std;
void teste();			//Protótipo da função teste
int main(){
	int horas = 60;
	cout << "Horas (função main) = " << horas << endl;
	teste();		//Chama a função teste
	return 0;
}
void teste()			//Definição da função teste()
{
	int horas = 120;
	cout << "Horas (função teste) = " << horas << endl;
}

