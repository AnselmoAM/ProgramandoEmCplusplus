//for07.cpp
#include <iostream>
using namespace std;
int main()
{
	int j, k;
	for(j=1;j<4;j++)		//fpr externo
		{
			cout << "j = " << j << endl;
			for(k=1;k<4;k++)
				cout<<" k = " <<k<<endl;
			cout<<endl;
		}
	return 0;
}