#include <stdio.h>
#include <stdlib.h>
struct StudentInfo {
	char cStuName[10]; 
	int  iSexType;
	int  iAge;
} stu1={"John",1,18}, stu2={"Mary",0,19}; // �ŧi�ɦP�ɵ���l��
int main(void)
{
	printf("%s �ʧO:",stu1.cStuName);
	if( stu1.iSexType == 1 ) printf("�k"); else printf("�k");
	printf(" �~��: %2d\n",stu1.iAge);
	printf("%s �ʧO:",stu2.cStuName);
	if( stu2.iSexType == 1 ) printf("�k"); else printf("�k");
	printf(" �~��: %2d\n",stu2.iAge);
	system("pause"); return(0);
}