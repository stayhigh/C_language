#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // 姓名
	int iScore[3]; // 儲存國英數三科成績
	float fAve; // 平均成績
};
int main(void)
{
	struct  StuScores stu; // 宣告結構變數 stu
	printf("輸入姓名: "); gets(stu.cStuName);  // 輸入姓名
	printf("國文成績: "); scanf("%d",&stu.iScore[0]); // 輸入國文成績
	printf("英文成績: "); scanf("%d",&stu.iScore[1]); // 輸入英文成績
	printf("數學成績: "); scanf("%d",&stu.iScore[2]); // 輸入數學成績
	stu.fAve = (stu.iScore[0] + stu.iScore[1] + stu.iScore[2])/3.0f; // 計算平均
	printf("%s 的平均成績為 %5.2f\n",stu.cStuName,stu.fAve);
	system("pause"); return(0);
}