#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cNL = '\n'; int n = 97;
	putchar(n); /* ��X�ܼ� n ����, a �� ASCII �s�X�O 97 */ 
	putchar(cNL);
	puts("�W�@��H putchar(cNL) ��X����");
	putchar(65);  /* ��X 65 �ҹ������r��*/
	putchar('\n'); /* ����*/
	system("pause");
	return(0);
}

