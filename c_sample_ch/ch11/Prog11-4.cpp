#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() 
{
	char *cName[] = {"Apple", "Orange", "Pear" };
	float fVal[] = {1.1f, 12.21f, 123.321f};

	for( int i = 0 ; i < 3 ; i++ ) {
		cout << setiosflags(ios::left); // �a�����, �����ɦV cout
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left) // �����a�����,�^��a�k���
			 << setw(10) << fVal[i] << endl;
	}
	for( int i = 0 ; i < 3 ; i++ ) {
		cout.fill('*'); // �]�w�񺡦r���� *
		cout << resetiosflags(ios::left); //�^��a�k���
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left); // �a�����
		cout << setfill('^')  //�]�w�񺡦r���� ^
			 << setw(10) << fVal[i] << endl;
	}
 	system("pause"); return(0);
}