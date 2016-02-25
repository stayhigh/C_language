#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415f;
	int		iArray[] = {3,5,7};
	fstream fileobj;	// 宣告一個可以存取檔案的物件	
	fileobj.open("number.bin", ios::binary | ios::out );
	if( !fileobj.is_open() ) { // .bin 一般用於表示為二進位檔
		printf("number.bin 檔案無法開啟"); system("pause"); return(0); 
	} 
	fileobj.write((char*)&da, sizeof(double));// 寫入變數da在記憶體中的儲存內容
	fileobj.write((char*)&fb, sizeof(float)); // 寫入變數fb在記憶體中的儲存內容
	fileobj.write((char*)iArray, sizeof(int)*3); //寫入陣列 iArray 的儲存內容
	fileobj.close(); // 關閉檔案
	system("pause"); return(0); 
}