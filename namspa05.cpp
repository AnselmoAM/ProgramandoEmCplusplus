//namspa05.cpp
#include <iostream>
#include <locale.h>
using std::cin;
using std::cout;
int main()
{
	setlocale(LC_ALL, "pt_BR");
	int idade;
	cout << "Digite a sua idade: ";
	cin >> idade;
	cout << "Você tem " << idade <<  " anos de idade" << "\n";
}
