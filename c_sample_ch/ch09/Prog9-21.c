#include <stdio.h>
#include <stdlib.h>
// 自動編號
enum Fruit{APPLE,ORANGE,GRAPE}; 
// 設定第一個成員的編號
enum RGBColor{RED = 10,GREEN, BLUE}; 
// 設定每一個成員的編號
enum Animal{LION = 1, TIGER=11, BEAR=22}; 
int main(void)
{
	printf("APPLE=%d ORANGE=%d GRAPE=%d\n",APPLE, ORANGE, GRAPE);
	printf("RED=%d GREEN=%d BLUE=%d\n",RED, GREEN, BLUE);
	printf("LION=%d TIGER=%d BEAR=%d\n",LION, TIGER, BEAR);
	system("pause"); return(0);
}