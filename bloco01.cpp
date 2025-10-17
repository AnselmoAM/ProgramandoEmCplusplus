//bloco01.cpp
#include <iostream>
using namespace std;
int main()
{
	int codigo1 = 100;
	{		//início do bloco
		int codigo2 = 200;
		cout << "codigo1 (no bloco) = " << codigo1 << endl;
		cout << "codigo2 (no bloco) = " << codigo2 << endl;
	}
	cout << "codigo1 (fora do bloco) = " << codigo1 << endl;
	//cout << "codigo2 (fora do bloco) = " << codigo2 << endl;
	return 0;
}