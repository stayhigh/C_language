#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // �m�W
	int iScore[3]; // �x�s��^�ƤT�즨�Z
	float fAve; // �������Z
};
int main(void)
{
	struct  StuScores stu[3]; // �ŧi���c�}�C stu
	int i;
	for( i = 0 ; i < 3 ; i++ ) {
		printf("��J�m�W: ");
		gets(stu[i].cStuName);  // ��J�m�W
		printf("��妨�Z: ");
		scanf("%d",&stu[i].iScore[0]); //��妨�Z
		printf("�^�妨�Z: ");
		scanf("%d",&stu[i].iScore[1]); // �^�妨�Z
		printf("�ƾǦ��Z: ");
		scanf("%d",&stu[i].iScore[2]); // �ƾǦ��Z
		stu[i].fAve = (stu[i].iScore[0]+stu[i].iScore[1]+stu[i].iScore[2])/3.0f; // �p�⥭��
		fflush(stdin);
	}
	for( i = 0 ; i < 3 ; i++ ) 
		printf("%s ���������Z�� %5.2f\n",stu[i].cStuName,stu[i].fAve);
	system("pause"); return(0);
}