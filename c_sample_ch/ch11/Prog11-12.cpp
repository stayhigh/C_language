#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int ix = 2;
	int &rx = ix; // rx �� ix ���ѷ�
	cout << "rx = " << rx << endl;
	rx = 5;
	cout << "ix = " << ix << endl;
	cout << "ix ���x�s��} : " << &ix << endl;	
	cout << "rx ���x�s��} : " << &rx << endl;	
	system("pause"); return(0);
}