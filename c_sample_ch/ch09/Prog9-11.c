#include <stdio.h>
#include <stdlib.h>
struct CharacterInfo {
	char  cName[10];// ����W��
	int   iHP;		// �ͩR��
	float fPosX;	// X �b�y��
	float fPosY;	// Y �b�y��
} villager = {"�p�Ǽw",100, 10.2f, -15.7f };
int main(void)
{
	struct CharacterInfo *pNPC;  // �ŧi pNPC �����c�����ܼ�
	pNPC = &villager;  // �N pNPC ���V���c�ܼ� villager  
	printf("����W��: %s, �ͩR��: %4d\n",pNPC->cName, pNPC->iHP);
	printf("�Ҧb��m: (%6.2f, %6.2f)\n",pNPC->fPosX, pNPC->fPosY); 
	system("pause"); return(0);
}