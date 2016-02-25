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
	struct CharacterInfo *pNPC;  // 宣告 pNPC 為結構指標變數
	pNPC = &villager;  // 將 pNPC 指向結構變數 villager  
	printf("角色名稱: %s, 生命值: %4d\n",pNPC->cName, pNPC->iHP);
	printf("所在位置: (%6.2f, %6.2f)\n",pNPC->fPosX, pNPC->fPosY); 
	system("pause"); return(0);
}