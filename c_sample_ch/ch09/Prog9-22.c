#include <stdio.h>
#include <stdlib.h>
enum Week{SUN,MON,TUE,WED,THU,FRI,SAT} theday;
int main(void)
{
	char cChiName[][10] = {"星期日", "星期一","星期二",
		"星期三","星期四","星期五","星期六",};
	char cEngName[][10] = {"Sunday","Monday","Tuesday",
		"Wednesday","Thursday","Friday","Saturday"};
	printf("英文       中文    \n"); 
	for (theday = SUN ; theday <= SAT ; theday++) // 輸出一週七天的中英文名稱
		printf("%-10s %s  \n",cEngName[theday], cChiName[theday]);
	system("pause"); return(0);
}