#include <stdio.h>
#include <stdlib.h>
// �۰ʽs��
enum Fruit{APPLE,ORANGE,GRAPE}; 
// �]�w�Ĥ@�Ӧ������s��
enum RGBColor{RED = 10,GREEN, BLUE}; 
// �]�w�C�@�Ӧ������s��
enum Animal{LION = 1, TIGER=11, BEAR=22}; 
int main(void)
{
	printf("APPLE=%d ORANGE=%d GRAPE=%d\n",APPLE, ORANGE, GRAPE);
	printf("RED=%d GREEN=%d BLUE=%d\n",RED, GREEN, BLUE);
	printf("LION=%d TIGER=%d BEAR=%d\n",LION, TIGER, BEAR);
	system("pause"); return(0);
}