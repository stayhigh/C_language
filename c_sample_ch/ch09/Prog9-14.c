#include <stdio.h>
#include <stdlib.h>
struct BasicInfo {
	char cName[10]; //姓名
	int  iAge;		//出生年
};
struct StudentInfo {
	struct BasicInfo Info; //姓名與出生年
	int iID;
	int iGrade;
};
int main(void)
{
	struct StudentInfo stu = {"John" ,2001, 1010101, 5};
	printf("學生姓名: %s 出生年: %3d\n",stu.Info.cName, stu.Info.iAge);
	printf("學號: %8d 年級: %2d\n",stu.iID, stu.iGrade);
	printf("輸入學生姓名: "); gets(stu.Info.cName);
	printf("輸入出生年:  "); scanf("%d",&stu.Info.iAge); 
	printf("學生姓名: %s 出生年: %3d\n",stu.Info.cName, stu.Info.iAge);
	system("pause"); return(0);
}