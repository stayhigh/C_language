#include <stdio.h>
#include <stdlib.h>
struct CharacterInfo {
	char  cName[10];// 角色名稱
	int   iHP;		// 生命值
	float fPosX;	// X 軸座標
	float fPosY;	// Y 軸座標
};
int main(void)
{
	struct CharacterInfo *pNPC;
	// 為 pNPC 取得所需要的儲存空間, 以下是標準寫法
	pNPC = (struct CharacterInfo *)malloc(sizeof(struct CharacterInfo));
	printf("輸入角色名稱: "); gets(pNPC->cName);		
	printf("輸入生命值:   "); scanf("%d",&pNPC->iHP);	
	printf("輸入X軸座標:  "); scanf("%f",&pNPC->fPosX); 
	printf("輸入Y軸座標:  "); scanf("%f",&pNPC->fPosY); 
	printf("角色名稱: %s, 生命值: %4d\n",pNPC->cName, pNPC->iHP);
	printf("所在位置: (%6.2f, %6.2f)\n",pNPC->fPosX, pNPC->fPosY); 
	free(pNPC);  // 釋放取得的儲存空間
	system("pause"); return(0);
}