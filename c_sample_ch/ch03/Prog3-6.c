#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iAge, iCode; short iId1, iId2;
	float fWeight; char cH;
	printf("��J�ʧO�N�X(M:�k,F:�k):"); scanf("%c",&cH);
	printf("��J���O: %c\n",cH);
	printf("��J�~��:"); scanf("%d",&iAge);
	printf("��J���O: %d\n",iAge);
	printf("��J�魫(�p���I�U1��):");
	scanf("%f",&fWeight);
	printf("��J���O: %3.1f\n",fWeight);
	printf("��J��Ӿ�ƥN�X:");
	scanf("%hd%hd",&iId1,&iId2);
	printf("��J����ӼƦr: %d %d\n",iId1,iId2);
	printf("��J�����ҫ�|�X:");
	scanf("%4d",&iCode);
	printf("��J���|�X�O: %d\n",iCode);
	system("pause");
	return(0);
}