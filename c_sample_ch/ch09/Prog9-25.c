#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct StudentInfo { // 以 typedef 重新命名
	char  cName[10];//學生姓名
	int	  iYear;    //出生年
} STUDENTINFO, *PSTUDENTINFO; // *PSTUDENTINFO 代表指標變數型別
void PrintInfo(PSTUDENTINFO); // 等同於 void PrintInfo(struct StudentInfo *)
int main(void)
{
	STUDENTINFO stuX = {"John",1990}; // 等同於 struct StudentInfo stuX =...
	PrintInfo(&stuX); // PrintInfo 以傳指標方式輸出變數內容
	printf("%s 出生於 %4d 年\n",stuX.cName,stuX.iYear);
	system("pause"); return(0);
}
void PrintInfo(PSTUDENTINFO stu) //等同於void PrintInfo(struct StudentInfo *stu)
{
	printf("%s 出生於 %4d 年\n",stu->cName, stu->iYear);
	strcpy(stu->cName, "Mary"); stu->iYear = 1989;  // 重新設定變數的內容
}