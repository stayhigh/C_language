#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentInfo {
	char  cName[10];//�ǥͩm�W
	int	  iYear;    //�X�ͦ~
};
void PrintInfo(struct StudentInfo []); // �禡�쫬�ŧi, ���c�}�C���I�s
int main(void)
{
	int i;
	struct StudentInfo stuX[2] = {"John",1990, "Mary",1988}; 
	PrintInfo(stuX); // ���c�}�C�ǻ� PrintInfo ��X�ܼƤ��e
	for( i = 0 ; i < 2 ; i++ )  
		printf("%s �X�ͩ� %4d �~\n",stuX[i].cName,stuX[i].iYear);
	system("pause"); return(0);
}
void PrintInfo(struct StudentInfo stu[])
{
	int i;
	for( i = 0 ; i < 2 ; i++ )  {
		printf("%s �X�ͩ� %4d �~\n",stu[i].cName, stu[i].iYear);
		stu[i].iYear++;  // �����N�X�ͦ~�[1
	}
}