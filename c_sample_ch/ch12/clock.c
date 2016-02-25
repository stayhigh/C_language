/*───────────────────────────────────────
time.h 包含以下有用的時間定義

結構 tm,定義如下
struct tm {
        int tm_sec;     // 目前時刻的秒數
        int tm_min;     // 目前時刻的分鐘數
        int tm_hour;    // 目前時刻的小時數
        int tm_mday;    // 今天是本月的第幾天
        int tm_mon;     // 今天是今年的第幾個月
        int tm_year;    // 今天是從 1990 年之後的第幾年
        int tm_wday;    // 今天從週日到目前為止的第幾天 0～6
        int tm_yday;    // 今天是從1月1日到目前為止的第幾天 0-365
        int tm_isdst;   // 是否計算日光節約時間的旗標
        };

time()函式：傳回從1970 年 1 月 1 日 0 時 0 分 0 秒算起,一直到目前為止的總秒數
	當呼叫 time 函式時，如果以傳址呼叫的方式，傳入引數，型別是定義在 time.h 中的 time_t 型別（實際上的型別是 long）
	則該引數上述的總秒數會儲存在該引數內。
	如以下的程式碼：
	time_t curtime;   
	time(&curtime); 總秒數會儲存在 curtime 中
localtime() 函式：可以將上述的總秒數，轉成 tm 結構的資料型態傳回
	如以下的程式碼：
	struct tm *pTime;
	pTime = localtime(&curtime); 目前的總秒數會轉成 tm 的結構
	透過 pTime->tm_sec、pTime->tm_min、pTime->tm_hour 就可以取得目前的秒數、分數與小時數
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	time_t curtime;		// 取得總秒數的變數
	struct tm *pTime;   // 取得總秒數轉成 tm 結構的時間
	while( 1 ) {        // 無窮迴圈
		time(&curtime); // 取得 1970 年元旦至今的總秒數
		pTime = localtime(&curtime); /* 轉換成tm 格式*/
		printf("%d:%d:%d\n",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
		system("cls");       /* 清除螢幕*/
	}
	system("pause");return(0);
}
