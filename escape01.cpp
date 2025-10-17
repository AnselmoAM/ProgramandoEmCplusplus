//escape01.cpp
#include <iostream>
using namespace std;
int main()
{
	char letra1 = '\x043';		//sequência de escape hexadecimal
	char letra2 = '\103';		//sequência de escape octal
	cout << letra1 << "\n";
	cout << letra2 << "\n";
	cout << "\x043\x02b\x02b" << endl;
	return 0;
}