#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iAge, iCode; short iId1, iId2;
	float fWeight; char cH;
	printf("輸入性別代碼(M:男,F:女):"); scanf("%c",&cH);
	printf("輸入的是: %c\n",cH);
	printf("輸入年齡:"); scanf("%d",&iAge);
	printf("輸入的是: %d\n",iAge);
	printf("輸入體重(小數點下1位):");
	scanf("%f",&fWeight);
	printf("輸入的是: %3.1f\n",fWeight);
	printf("輸入兩個整數代碼:");
	scanf("%hd%hd",&iId1,&iId2);
	printf("輸入的兩個數字: %d %d\n",iId1,iId2);
	printf("輸入身份證後四碼:");
	scanf("%4d",&iCode);
	printf("輸入的四碼是: %d\n",iCode);
	system("pause");
	return(0);
}