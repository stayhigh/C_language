#include <stdio.h>
#include <stdlib.h>
struct CharacterInfo {
	char  cName[10];// 角色名稱
	int   iHP;		// 生命值
	float fPosX;	// X 軸座標
	float fPosY;	// Y 軸座標
} villager = {"雷納德",100, 10.2f, -15.7f };
int main(void)
{
	struct CharacterInfo *pNPC; // 宣告 pNPC 為結構指標變數
	pNPC = &villager;	// 將 pNPC 指向結構變數 villager
	printf("角色名稱: %s, 生命值: %4d\n",pNPC->cName, pNPC->iHP);
	printf("所在位置: (%6.2f, %6.2f)\n",pNPC->fPosX, pNPC->fPosY); 
	printf("villager 的起始位址: %p\n",&villager);
	printf("cName    的起始位址: %p\n",villager.cName);
	printf("iHP      的起始位址: %p\n",&villager.iHP);
	printf("fPosX    的起始位址: %p\n",&villager.fPosX);
	printf("fPosY    的起始位址: %p\n",&villager.fPosY);
	printf("pNPC     的起始位址: %p\n",&pNPC);
	system("pause"); return(0);
}