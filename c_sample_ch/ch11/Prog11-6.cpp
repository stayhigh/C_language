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
		cout << "輸入學號 " ; cin >> ix;
		if( !cin.fail() ) { cin.sync(); break;} // 輸入成功
		cin.clear(); cin.sync(); 
	} while(1);
	cout << "輸入姓名 " ; cin >> cName; cin.sync();
	cout << "輸入生日(yymmdd) "; cin.getline(cBirthDay, 7);
	cout << "輸入住址 " ; cin.get(cAddr, 10);
	cout << "學號 : " << ix << " 姓名 : " << cName;
	cout << "生日 : " << cBirthDay << " 住址 : " << cAddr << endl;
 	system("pause"); return(0);
}