#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // �m�W
	int iChi;	// ��妨�Z
	int iEng;	// �^�妨�Z
	int iMat;	// �ƾǦ��Z
	float fAve; // �������Z
};
int main(void)
{
	struct  StuScores stu; // �ŧi���c�ܼ� stu
	printf("��J�m�W: "); gets(stu.cStuName);  // ��J�m�W
	printf("��妨�Z: "); scanf("%d",&stu.iChi); // ��J��妨�Z
	printf("�^�妨�Z: "); scanf("%d",&stu.iEng); // ��J�^�妨�Z
	printf("�ƾǦ��Z: "); scanf("%d",&stu.iMat); // ��J�ƾǦ��Z
	stu.fAve = (stu.iChi + stu.iEng + stu.iMat)/3.0f; // �p�⥭��
	printf("%s ���������Z�� %5.2f\n",stu.cStuName,stu.fAve);
	system("pause"); return(0);
}