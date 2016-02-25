#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() 
{
	char *cName[] = {"Apple", "Orange", "Pear" };
	float fVal[] = {1.1f, 12.21f, 123.321f};

	for( int i = 0 ; i < 3 ; i++ ) {
		cout << setiosflags(ios::left); // 靠左對齊, 必須導向 cout
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left) // 取消靠左對齊,回到靠右對齊
			 << setw(10) << fVal[i] << endl;
	}
	for( int i = 0 ; i < 3 ; i++ ) {
		cout.fill('*'); // 設定填滿字元為 *
		cout << resetiosflags(ios::left); //回到靠右對齊
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left); // 靠左對齊
		cout << setfill('^')  //設定填滿字元為 ^
			 << setw(10) << fVal[i] << endl;
	}
 	system("pause"); return(0);
}