#include <stdio.h>
#include <stdlib.h>
enum Week{SUN,MON,TUE,WED,THU,FRI,SAT} theday;
int main(void)
{
	char cChiName[][10] = {"�P����", "�P���@","�P���G",
		"�P���T","�P���|","�P����","�P����",};
	char cEngName[][10] = {"Sunday","Monday","Tuesday",
		"Wednesday","Thursday","Friday","Saturday"};
	printf("�^��       ����    \n"); 
	for (theday = SUN ; theday <= SAT ; theday++) // ��X�@�g�C�Ѫ����^��W��
		printf("%-10s %s  \n",cEngName[theday], cChiName[theday]);
	system("pause"); return(0);
}