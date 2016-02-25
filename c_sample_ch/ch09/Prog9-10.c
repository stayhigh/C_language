#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // 姓名
	int iScore[3]; // 儲存國英數三科成績
	float fAve; // 平均成績
};
int main(void)
{
	struct StuScores stu[3] = {
		"John",  65, 78, 67, 0,
		"Mary",  87, 83, 79, 0,
		"Brown", 67, 87, 90, 0}; // 宣告時設定初始值
	int i;
	for( i = 0 ; i < 3 ; i++ ) { // 計算平均,並輸出
		stu[i].fAve = (stu[i].iScore[0]+stu[i].iScore[1]+stu[i].iScore[2])/3.0f; 
		printf("%s 的平均成績為 %5.2f\n",stu[i].cStuName,stu[i].fAve);
	}
	system("pause"); return(0);
}