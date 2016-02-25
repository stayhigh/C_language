#include <iostream>
#include <cstdlib>
#include <fstream>	// 載入定義檔案操作的標頭檔
using namespace std;
int main(void)
{
	ofstream outfile;	// 宣告一個可以輸出檔案的物件
	outfile.open("myfirst.txt",ios::out);
	if( !outfile.is_open() ) { // 檔案開啟失敗時, 必須終止對檔案的存取
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	outfile << "我的第一個C++檔案" << endl; // 將資料導給檔案物件
	outfile.close(); // 關閉檔案 
	system("pause"); return(0);
}