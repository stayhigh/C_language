#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() 
{
	int ix;
	char cName[20];
	char cAddr[20];
	char cBirthDay[20];
	do {
		cout << "��J�Ǹ� " ; cin >> ix;
		if( !cin.fail() ) { cin.sync(); break;} // ��J���\
		cin.clear(); cin.sync(); 
	} while(1);
	cout << "��J�m�W " ; cin >> cName; cin.sync();
	cout << "��J�ͤ�(yymmdd) "; cin.getline(cBirthDay, 7);
	cout << "��J��} " ; cin.get(cAddr, 10);
	cout << "�Ǹ� : " << ix << " �m�W : " << cName;
	cout << "�ͤ� : " << cBirthDay << " ��} : " << cAddr << endl;
 	system("pause"); return(0);
}