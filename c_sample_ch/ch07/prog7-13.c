#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time 函式 */
int WinLoss(int, int); // 引數1為電腦,引數2為玩家
void ShowMsg(int , int , int );
void ShowCPS(int );
void ShowCPS(int i) {
	if( i == 1 ) printf("剪刀");
	else if( i == 2 ) printf("石頭");
	else printf("布");
}
void ShowMsg(int c, int p, int s) { //引數 c 為電腦, p 為玩家, s 為判斷結果
	printf("  你出"); ShowCPS(p);
	printf(", 電腦出"); ShowCPS(c);
	if( s == -1 ) printf(", 你輸了!\n");
	else if( s == 0 ) printf(", 平手!\n");
	else printf(", 你贏了!\n");
}
int WinLoss(int c, int p) {	// 引數1為電腦, 引數2為玩家
	if( p == c ) return(0);	// 兩個出一樣平手
	if( p == 1) p = 4;		// 這時將玩家剪刀的代碼換成 4
	if( p == c + 1) return(1); // 也就是 p - c = 1, 代表玩家贏
	else return(-1);		// 代表玩家輸
}
int main(void)
{
	int iPWin, iCWin, ret;
	int iPlayer, iComp; // 玩家與電腦的出拳狀態
	iPWin = iCWin = 0; // 設定電腦與玩家目前都沒有人贏 
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // 以 rand 取得亂數, 再轉成1,2,3 成為電腦的出拳狀態
		printf("1:剪刀, 2:石頭, 3:布. 你出的是: "); scanf("%d",&iPlayer);
		if( iPlayer >= 1 && iPlayer <= 3 ){	// 避免使用者輸入錯誤
			ret = WinLoss(iComp, iPlayer);	// 呼叫 WinLoss 函式判斷輸贏
			ShowMsg(iComp, iPlayer, ret);	// 顯示出拳訊息
			if( ret == 1 ) iPWin++;		// 根據輸贏加總次數
			else if( ret == -1 ) iCWin++;
			printf("目前為止你贏 %d 次, 電腦贏 %d 次\n",iPWin,iCWin);
		}
		else {
			printf("你出錯了,請重出!\n");
			fflush(stdin);
		}
	}
	if(iPWin == 3) printf("恭喜!你贏電腦嘍!\n");
	else printf("這次輸了沒關係,下次繼續努力!\n");
    system("pause"); return(0);
}