#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() 
{
	float fVal[] = {1.1f, 12.21f, 123.321f, 1234.4321f };
	cout << "原始數值"; cout << setprecision(8); // 顯示 8 個數字
	for( int i = 0 ; i < 4	; i++ ) cout << setw(12) << fVal[i];
	cout << endl;
	cout << " 3個字元"; cout << setprecision(3); // 顯示 3 個數字
	for( int i = 0 ; i < 4	; i++ ) cout << setw(12) << fVal[i];
	cout << endl;
	cout << "固定長度"; cout << setiosflags(ios::fixed); // 固定長度
	for( int i = 0 ; i < 4	; i++ ) cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed); //清楚固定長度的設定
	cout << "科學記號"; cout << setiosflags(ios::scientific); // 科學記號
	for( int i = 0 ; i < 4	; i++ ) cout << setw(12) << fVal[i];
	cout << endl;
 	system("pause"); return(0);
}