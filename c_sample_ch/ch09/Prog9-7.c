#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // �m�W
	int iScore[3]; // �x�s��^�ƤT�즨�Z
	float fAve; // �������Z
};
int main(void)
{
	struct  StuScores stu; // �ŧi���c�ܼ� stu
	printf("��J�m�W: "); gets(stu.cStuName);  // ��J�m�W
	printf("��妨�Z: "); scanf("%d",				); // ��J��妨�Z
	printf("�^�妨�Z: "); scanf("%d",				); // ��J�^�妨�Z
	printf("�ƾǦ��Z: "); scanf("%d",				); // ��J�ƾǦ��Z
	stu.fAve = (									)/3.0f; // �p�⥭��
	printf("%s ���������Z�� %5.2f\n",stu.cStuName,stu.fAve);
	system("pause"); return(0);
}