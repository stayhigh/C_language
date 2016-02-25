#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Teacher {
	int  iTID;		// 教師編號
	int  iYears;	// 服務年資	
};
struct Student {
	int  iSID;		// 學號
	int	 iDegree;	// 年級
};
struct PersonalInfo {
	char cName[10];	// 姓名
	int  iType;		// 身份別, 1 表示老師, 2 代表學生
	union {
		struct Teacher tea;
		struct Student stu;
	};
} person;
int main(void)
{
	int iOpt;
	do {
		printf("請選擇身份別-1(老師) 2(學生) : "); scanf("%d",&iOpt);
	} while( iOpt != 1 && iOpt != 2 );
	person.iType = iOpt;
	if ( iOpt == 1 ) { // 身份為老師
		printf("請輸入老師的姓名: "); scanf("%s",person.cName);
		printf("請輸入老師的編號: "); scanf("%d",&person.tea.iTID);
		printf("請輸入服務年資:   "); scanf("%d",&person.tea.iYears);
	}
	else {  // 身份為學生
		printf("請輸入學生的姓名: "); scanf("%s",person.cName);
		printf("請輸入學生的學號: "); scanf("%d",&person.stu.iSID);
		printf("請輸入學生的年級: "); scanf("%d",&person.stu.iDegree);
	}
	if( person.iType == 1 ) 
		printf("%s 老師的編號: %6d 服務年資: %2d\n",
				person.cName,person.tea.iTID,person.tea.iYears);
	else 
		printf("學生 %s 的學號: %6d 目前%2d 年級\n",
				person.cName,person.stu.iSID,person.stu.iDegree);
	system("pause"); return(0);
}