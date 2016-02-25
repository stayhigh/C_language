#include <stdio.h>
#include <stdlib.h>
struct StudentInfo {
	char cStuName[10]; 
	int  iSexType;
	int  iAge;
} stu1={"John",1,18}, stu2={"Mary",0,19}; // 宣告時同時給初始值
int main(void)
{
	printf("%s 性別:",stu1.cStuName);
	if( stu1.iSexType == 1 ) printf("男"); else printf("女");
	printf(" 年齡: %2d\n",stu1.iAge);
	printf("%s 性別:",stu2.cStuName);
	if( stu2.iSexType == 1 ) printf("男"); else printf("女");
	printf(" 年齡: %2d\n",stu2.iAge);
	system("pause"); return(0);
}