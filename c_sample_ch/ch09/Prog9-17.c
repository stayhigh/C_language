#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentInfo {
	char  cName[10];//學生姓名
	int	  iYear;    //出生年
};
void PrintInfo(struct StudentInfo []); // 函式原型宣告, 結構陣列的呼叫
int main(void)
{
	int i;
	struct StudentInfo stuX[2] = {"John",1990, "Mary",1988}; 
	PrintInfo(stuX); // 結構陣列傳遞 PrintInfo 輸出變數內容
	for( i = 0 ; i < 2 ; i++ )  
		printf("%s 出生於 %4d 年\n",stuX[i].cName,stuX[i].iYear);
	system("pause"); return(0);
}
void PrintInfo(struct StudentInfo stu[])
{
	int i;
	for( i = 0 ; i < 2 ; i++ )  {
		printf("%s 出生於 %4d 年\n",stu[i].cName, stu[i].iYear);
		stu[i].iYear++;  // 偷偷將出生年加1
	}
}