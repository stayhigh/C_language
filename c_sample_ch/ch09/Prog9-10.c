#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // �m�W
	int iScore[3]; // �x�s��^�ƤT�즨�Z
	float fAve; // �������Z
};
int main(void)
{
	struct StuScores stu[3] = {
		"John",  65, 78, 67, 0,
		"Mary",  87, 83, 79, 0,
		"Brown", 67, 87, 90, 0}; // �ŧi�ɳ]�w��l��
	int i;
	for( i = 0 ; i < 3 ; i++ ) { // �p�⥭��,�ÿ�X
		stu[i].fAve = (stu[i].iScore[0]+stu[i].iScore[1]+stu[i].iScore[2])/3.0f; 
		printf("%s ���������Z�� %5.2f\n",stu[i].cStuName,stu[i].fAve);
	}
	system("pause"); return(0);
}