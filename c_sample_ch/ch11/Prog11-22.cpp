#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	fstream outfile, infile;	// 宣告一個可以存取檔案的物件
	char ch;
	infile.open("story.txt",ios::in);
	outfile.open("copy.txt",ios::out);
	if( !infile.is_open() || !outfile.is_open() ) { // 檔案開啟失敗時, 必須終止對檔案的存取
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	while( !infile.eof() ) {
		if( (ch = infile.get()) !=  EOF )  {	// 讀取一個字元
			outfile.put(ch);			// 寫出一個字元
		}
		cout << ch;		// 顯示讀取的內容
	}
	outfile.close(); // 關閉檔案 
	infile.close();
	system("pause"); return(0);
}