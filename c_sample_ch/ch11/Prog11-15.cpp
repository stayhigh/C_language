#include <iostream>
#include <cstdlib>
#include <memory.h>
#define STRING "new & delete"
using namespace std;
int main(void)
{
	int *pix;  pix = new int;	// 取得 1 個儲存 int 的空間
	char *pcs; pcs = new char[15];	// 取得 15 個儲存 char 的空間
	*pix = sizeof(STRING);	// 將最後的 null character 算進去
	memcpy(pcs, STRING, *pix);	// 複製內容到 pcs 中
	cout << "sizeof(\""<< pcs << "\") = " << *pix-1 << endl;
	delete pix; delete [] pcs;  // 釋放取得的空間
	system("pause"); return(0);
}