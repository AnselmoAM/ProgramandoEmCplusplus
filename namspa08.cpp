//namspa08.cpp
#include <iostream>
using namespace std;
namespace nivel19
{
	int valor1 = 100;
	namespace nivel18
	{
		int valor1 = 200;
		int numeros[10];
	}
}
int main()
{
	cout << "variável valor1 do namespace nivel19: " << nivel19::valor1 << endl;
	cout << "variável valor1 do namespace nivel18: " << nivel19::nivel18::valor1;
	cout << endl;
	return 0;
}
