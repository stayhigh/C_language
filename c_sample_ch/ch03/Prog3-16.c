#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cName[16];
	printf("輸入一段文字: ");
	scanf("%s",cName); // 輸入姓名
	printf("你輸入的是: %s\n",cName);
	system("pause");
	return(0);
}