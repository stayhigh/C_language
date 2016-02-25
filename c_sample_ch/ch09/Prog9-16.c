#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentInfo {
	char  cName[10];//學生姓名
	int	  iYear;    //出生年
};
void PrintInfo(struct StudentInfo *); // 函式原型宣告, 傳指標型式
int main(void)
{
	struct StudentInfo stuX = {"John",1990}; 
	PrintInfo(&stuX); // PrintInfo 以傳指標型式輸出變數內容
	printf("%s 出生於 %4d 年\n",stuX.cName,stuX.iYear);
	system("pause"); return(0);
}
void PrintInfo(struct StudentInfo *stu)
{
	printf("%s 出生於 %4d 年\n",stu->cName, stu->iYear);
	strcpy(stu->cName, "Mary"); stu->iYear = 1989;  // 重新設定變數的內容
}