//classm03.cpp
#include <iostream>
using namespace std;
void loop();			//Protótipo da funçaõ loop()
int main(){
	cout << "Primeira chamada" << endl;
	loop();
	cout << "Segunda chamada" << endl;
	loop();
	return 0;
}
void loop()			//Definição da funçaõ loop()
{
	int cont = 1;		//variável automática
	static int somat = 0;	//variável estática interna
	for(;cont<6;cont++)
		somat=somat+cont;
	cout << "Somatório = " << somat << endl;
}
