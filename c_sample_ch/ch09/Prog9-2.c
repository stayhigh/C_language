#include <stdio.h>
#include <stdlib.h>
// 結構定義請寫在這裡
struct StudentInfo {
	char cID[10];   // 學號
	char cName[10]; // 姓名
	char cSexType;  // 性別
	char cTelNo[10];// 電話
	int	 iAge;		// 年齡
};
struct CharacterInfo {
	char  cName[10];// 角色名稱
	int   iHP;		// 生命值
	int   iMP;		// 生命值
	float fPosX;	// X軸座標
	float fPosY;	// Y軸座標
};
//-------------------
int main(void)
{
	system("pause"); return(0);
}