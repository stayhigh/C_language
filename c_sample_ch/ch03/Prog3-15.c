#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch; int ix = 0; 
	printf("��J�@�Ӿ��:"); scanf("%d",&ix);
	fflush(stdin); // �M����J�w�İϪ����e
	printf("��J�@�Ӧr��:"); ch = getchar();
	printf("ch = %d, ix = %d\n",ch, ix);
	system("pause");
	return(0);
}

