#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cAsk1[20] = "��J�A���m�W:";
	char cAsk2[20] = "��J�A���Ǹ�:";
	char cName[20] = ""; // �]�w��l�Ȭ� \0 �r��
	char cId[20] = "";   // �]�w��l�Ȭ� \0 �r��	
	printf("%s",cAsk1);
	scanf("%19[A-Za-z0-9 ]",cName); // ��J�m�W.�]�w�u�౵�� 19 �Ӧr��
	fflush(stdin);
	puts(cAsk2); 
	gets(cId);	// ��J�Ǹ�
	printf("�A���m�W: %s �Ǹ�: %s\n",cName,cId);
	system("pause");
	return(0);
}