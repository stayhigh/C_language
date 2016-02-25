#include <stdio.h>
#include <stdlib.h>
#define M_PI		3.14159265358979323846
#define M_DEG2RAD	M_PI/180.0	// 定義角度轉弧度的常數
#define M_RAD2DEG	180.0/M_PI	// 定義弧度轉角度的常數
#define INPUT_ASK	"請輸入要轉換的方式 \
1.角度, 2.弧度\n"  // 字串,超過一行請以 \ 來分隔
#define INPUT_DEGREE "請輸入角度: "
#define INPUT_RADIAN "請輸入弧度: "
#define DEG_SELECT 1 
#define RAD_SELECT 2
int main() {
	int i;
	float x;
	printf(INPUT_ASK); scanf("%d",&i);
	if( i == DEG_SELECT ) {
		printf(INPUT_DEGREE); scanf("%f",&x); 
		printf("相對應的弧度為 : %f\n",x*M_DEG2RAD);
	}
	else if ( i == RAD_SELECT ) {
		printf(INPUT_RADIAN); scanf("%f",&x); 
		printf("相對應的角度為 : %f\n",x*M_RAD2DEG);
	}
	system("pause"); return(0);
}