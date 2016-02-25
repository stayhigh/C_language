#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	char buf[80];
	fstream fileobj;	// 宣告一個可以存取檔案的物件
	fileobj.open("message.txt",ios::in);
	if( !fileobj.is_open() ) { // 檔案開啟失敗
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	while( !fileobj.eof() ) {
		fileobj.getline(buf, 80);
		cout << buf << endl;	// 顯示讀取的內容
	}
	fileobj.close(); // 關閉檔案 
	fileobj.clear(); // 清除檔案的狀態
	fileobj.open("copy.txt",ios::out);	// 再次開啟檔案
	if( !fileobj.is_open() ) { // 檔案開啟失敗
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	fileobj << buf;
	fileobj.close(); // 關閉檔案 
	system("pause"); return(0);
}