#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // 姓名
	int iScore[3]; // 儲存國英數三科成績
	float fAve; // 平均成績
};
int main(void)
{
	struct  StuScores stu[3]; // 宣告結構陣列 stu
	int i;
	for( i = 0 ; i < 3 ; i++ ) {
		printf("輸入姓名: ");
		gets(stu[i].cStuName);  // 輸入姓名
		printf("國文成績: ");
		scanf("%d",&stu[i].iScore[0]); //國文成績
		printf("英文成績: ");
		scanf("%d",&stu[i].iScore[1]); // 英文成績
		printf("數學成績: ");
		scanf("%d",&stu[i].iScore[2]); // 數學成績
		stu[i].fAve = (stu[i].iScore[0]+stu[i].iScore[1]+stu[i].iScore[2])/3.0f; // 計算平均
		fflush(stdin);
	}
	for( i = 0 ; i < 3 ; i++ ) 
		printf("%s 的平均成績為 %5.2f\n",stu[i].cStuName,stu[i].fAve);
	system("pause"); return(0);
}