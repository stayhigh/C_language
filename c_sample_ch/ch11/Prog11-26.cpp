#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	double	da;
	float	fb;
	int		iArray[3];
	fstream fileobj;	// 宣告一個可以存取檔案的物件	
	fileobj.open("number.bin", ios::binary | ios::in );
	if( !fileobj.is_open() ) { 
		printf("number.bin 檔案無法開啟"); system("pause"); return(0); 
	} 
	fileobj.read((char*)&da, sizeof(double));// 讀取變數 da 的內容
	fileobj.read((char*)&fb, sizeof(float)); // 讀取變數 fb 的內容
	fileobj.read((char*)iArray, sizeof(int)*3); //讀取陣列 iArray 的內容
	fileobj.close(); // 關閉檔案
	cout << "da = " << da << endl;
	cout << "fb = " << fb << endl;
	for(int i = 0; i < 3; i++)
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	system("pause"); return(0); 
}