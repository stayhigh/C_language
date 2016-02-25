#include <iostream>
#include <cstdlib>
#include <fstream>	// 載入定義檔案操作的標頭檔
using namespace std;
int main(void)
{
	char cBuf[80];
	ifstream infile;	// 宣告一個可以讀取檔案的物件
	infile.open("myfirst.txt",ios::in);
	if( !infile.is_open() ) { // 檔案開啟失敗
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	infile >> cBuf; // 從檔案物件讀取檔案的內容給 cBuf
	cout << cBuf << endl;	// 顯示讀取的內容
	infile.close(); // 關閉檔案 
	system("pause"); return(0);
}