#include <stdio.h>
#include <stdlib.h>
struct CharacterInfo {
	char  cName[10];// ����W��
	int   iHP;		// �ͩR��
	float fPosX;	// X �b�y��
	float fPosY;	// Y �b�y��
};
int main(void)
{
	struct CharacterInfo *pNPC;
	// �� pNPC ���o�һݭn���x�s�Ŷ�, �H�U�O�зǼg�k
	pNPC = (struct CharacterInfo *)malloc(sizeof(struct CharacterInfo));
	printf("��J����W��: "); gets(pNPC->cName);		
	printf("��J�ͩR��:   "); scanf("%d",&pNPC->iHP);	
	printf("��JX�b�y��:  "); scanf("%f",&pNPC->fPosX); 
	printf("��JY�b�y��:  "); scanf("%f",&pNPC->fPosY); 
	printf("����W��: %s, �ͩR��: %4d\n",pNPC->cName, pNPC->iHP);
	printf("�Ҧb��m: (%6.2f, %6.2f)\n",pNPC->fPosX, pNPC->fPosY); 
	free(pNPC);  // ������o���x�s�Ŷ�
	system("pause"); return(0);
}