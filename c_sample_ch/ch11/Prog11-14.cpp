#include <iostream>
#include <cstdlib>
using namespace std;
int &min(int &a,int &b)
{
	if( a > b ) return b;
	else return a;
}
int main(void)
{
	int i = 10, j = 20;
	cout << "Before min(i,j) = 50 ";
	cout << "i = " << i << ", j = " << j << endl;
	min(i,j) = 50;	// �N min() �Ǧ^���ѷӳ]�w�� 50
	cout << "After  min(i,j) = 50 ";
	cout << "i = " << i << ", j = " << j << endl;
	i = min(i,j);	// �N�ܼ� i �]�w�� max() �禡�Ǧ^���ѷӤ��e
	cout << "After  i = min(i,j)  ";
	cout << "i = " << i << ", j = " << j << endl;
	system("pause"); return(0);
}