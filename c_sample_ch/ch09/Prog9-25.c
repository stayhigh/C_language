#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct StudentInfo { // �H typedef ���s�R�W
	char  cName[10];//�ǥͩm�W
	int	  iYear;    //�X�ͦ~
} STUDENTINFO, *PSTUDENTINFO; // *PSTUDENTINFO �N������ܼƫ��O
void PrintInfo(PSTUDENTINFO); // ���P�� void PrintInfo(struct StudentInfo *)
int main(void)
{
	STUDENTINFO stuX = {"John",1990}; // ���P�� struct StudentInfo stuX =...
	PrintInfo(&stuX); // PrintInfo �H�ǫ��Ф覡��X�ܼƤ��e
	printf("%s �X�ͩ� %4d �~\n",stuX.cName,stuX.iYear);
	system("pause"); return(0);
}
void PrintInfo(PSTUDENTINFO stu) //���P��void PrintInfo(struct StudentInfo *stu)
{
	printf("%s �X�ͩ� %4d �~\n",stu->cName, stu->iYear);
	strcpy(stu->cName, "Mary"); stu->iYear = 1989;  // ���s�]�w�ܼƪ����e
}