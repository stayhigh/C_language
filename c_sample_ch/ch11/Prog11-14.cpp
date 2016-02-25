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
	min(i,j) = 50;	// 將 min() 傳回的參照設定成 50
	cout << "After  min(i,j) = 50 ";
	cout << "i = " << i << ", j = " << j << endl;
	i = min(i,j);	// 將變數 i 設定成 max() 函式傳回的參照內容
	cout << "After  i = min(i,j)  ";
	cout << "i = " << i << ", j = " << j << endl;
	system("pause"); return(0);
}