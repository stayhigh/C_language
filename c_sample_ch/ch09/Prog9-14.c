#include <stdio.h>
#include <stdlib.h>
struct BasicInfo {
	char cName[10]; //�m�W
	int  iAge;		//�X�ͦ~
};
struct StudentInfo {
	struct BasicInfo Info; //�m�W�P�X�ͦ~
	int iID;
	int iGrade;
};
int main(void)
{
	struct StudentInfo stu = {"John" ,2001, 1010101, 5};
	printf("�ǥͩm�W: %s �X�ͦ~: %3d\n",stu.Info.cName, stu.Info.iAge);
	printf("�Ǹ�: %8d �~��: %2d\n",stu.iID, stu.iGrade);
	printf("��J�ǥͩm�W: "); gets(stu.Info.cName);
	printf("��J�X�ͦ~:  "); scanf("%d",&stu.Info.iAge); 
	printf("�ǥͩm�W: %s �X�ͦ~: %3d\n",stu.Info.cName, stu.Info.iAge);
	system("pause"); return(0);
}