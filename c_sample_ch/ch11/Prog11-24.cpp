#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
struct StuInfo {
	int	 iID;
	char cName[10];
	char cBirthday[10];
};
int main(void)
{
	fstream fileobj;	// 宣告一個可以存取檔案的物件	
	struct StuInfo stu[5];
	int iNum, i = 0; //stu 的索引值
	fileobj.open("stuinfo.txt",ios::in);
	if( !fileobj.is_open() ) { // 檔案開啟失敗
		cout << "檔案無法開啟"; system("pause"); return(0); 
	}
	while( !fileobj.eof() ) {
		fileobj >> stu[i].iID;			// 讀取學號
		fileobj >> stu[i].cName;		// 讀取姓名
		fileobj >> stu[i].cBirthday;	// 讀取生日
		i++;
	}
	iNum = i; printf("學號   姓名    生日\n");
	for( i = 0 ; i < iNum ; i++ )
		cout<<stu[i].iID<<"  "<<stu[i].cName<<"  "<<stu[i].cBirthday<<endl;
	fileobj.close(); system("pause"); return(0); // 關閉檔案
}