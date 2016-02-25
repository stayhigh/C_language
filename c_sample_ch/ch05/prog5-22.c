#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time 函式 */
int main(void)
{
	int iPWin, iCWin;
	int iPlayer, iComp; // 玩家與電腦的出拳狀態
	iPWin = iCWin = 0; // 設定電腦與玩家目前都沒有人贏 
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // 以 rand 取得亂數, 再轉成1,2,3 成為電腦的出拳狀態
		printf("1:剪刀, 2:石頭, 3:布. 你出的是: ");
		scanf("%d",&iPlayer);
		switch(iPlayer) { 
			case 1: /* 使用者出剪刀 */
				if( iComp==1 ) printf("你出剪刀,電腦也出剪刀,平手!\n");
				else if( iComp==2 ) {
					iCWin++;
					printf("你出剪刀,電腦出石頭,你輸了!"); 
					printf(" 目前電腦贏%2d 次\n",iCWin);
				}
				else { /* 電腦出布 */
					iPWin++;
					printf("你出剪刀,電腦出布,你贏了!");
					printf(" 目前你贏%2d 次\n",iPWin);
				}
				break;
			case 2: /* 石頭 */
				if( iComp==1 ) {
					iPWin++;
					printf("你出石頭,電腦出剪刀,你贏了!");
					printf("  目前你贏%2d 次\n",iPWin);
				}
				else if( iComp==2 ) printf("你出石頭,電腦出石頭,平手!\n");
				else { /* 電腦出布 */
					iCWin++;
					printf("你出石頭,電腦出布,你輸了!");
					printf(" 目前電腦贏%2d 次\n",iCWin);
				}
				break;
			case 3: /* 布 */
				if( iComp==1 ) {
					iCWin++;
					printf("你出布,電腦出剪刀,你輸了!");
					printf(" 目前電腦贏%2d 次\n",iCWin);
				}
				else if( iComp==2 ) {
					iPWin++;
					printf("你出布,電腦出石頭,你贏了!\n");
					printf(" 目前你贏%2d 次\n",iPWin);
				}
				else printf("你出布,電腦出布,平手!\n");
				break;
			default:
				printf("輸入錯誤\n");
		}
	}
	if(iPWin == 3) printf("恭喜!你贏電腦嘍!\n");
	else printf("這次輸了沒關係,下次繼續努力!\n");
    system("pause");
	return 0;
}