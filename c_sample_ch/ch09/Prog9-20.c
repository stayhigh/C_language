#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Teacher {
	int  iTID;		// �Юv�s��
	int  iYears;	// �A�Ȧ~��	
};
struct Student {
	int  iSID;		// �Ǹ�
	int	 iDegree;	// �~��
};
struct PersonalInfo {
	char cName[10];	// �m�W
	int  iType;		// �����O, 1 ��ܦѮv, 2 �N��ǥ�
	union {
		struct Teacher tea;
		struct Student stu;
	};
} person;
int main(void)
{
	int iOpt;
	do {
		printf("�п�ܨ����O-1(�Ѯv) 2(�ǥ�) : "); scanf("%d",&iOpt);
	} while( iOpt != 1 && iOpt != 2 );
	person.iType = iOpt;
	if ( iOpt == 1 ) { // �������Ѯv
		printf("�п�J�Ѯv���m�W: "); scanf("%s",person.cName);
		printf("�п�J�Ѯv���s��: "); scanf("%d",&person.tea.iTID);
		printf("�п�J�A�Ȧ~��:   "); scanf("%d",&person.tea.iYears);
	}
	else {  // �������ǥ�
		printf("�п�J�ǥͪ��m�W: "); scanf("%s",person.cName);
		printf("�п�J�ǥͪ��Ǹ�: "); scanf("%d",&person.stu.iSID);
		printf("�п�J�ǥͪ��~��: "); scanf("%d",&person.stu.iDegree);
	}
	if( person.iType == 1 ) 
		printf("%s �Ѯv���s��: %6d �A�Ȧ~��: %2d\n",
				person.cName,person.tea.iTID,person.tea.iYears);
	else 
		printf("�ǥ� %s ���Ǹ�: %6d �ثe%2d �~��\n",
				person.cName,person.stu.iSID,person.stu.iDegree);
	system("pause"); return(0);
}