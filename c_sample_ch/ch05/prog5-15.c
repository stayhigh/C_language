#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	int ia, ie, ii, io, iu, is;
	ia = ie = ii = io = iu = is = 0;
	printf("輸入一段英文句子, 以 # 代表結尾\n");
	while ( (ch = getchar()) != '#')	/* 讀取字元後進行換行字元的判斷 */
	{
		switch(ch) {
			case 'a': /* 母音 a, 無論大小寫都算 */
			case 'A':
				ia++; break;
			case 'e': /* 母音 e, 無論大小寫都算 */
			case 'E':
				ie++; break;
			case 'i': /* 母音 i, 無論大小寫都算 */
			case 'I':
				ii++; break;
			case 'o': /* 母音 o, 無論大小寫都算 */
			case 'O':
				io++; break;
			case 'u': /* 母音 u, 無論大小寫都算 */
			case 'U':
				iu++; break;
			case ' ': /* 空白字元 */
				is++; break;
		}
    }
	printf("母音與空白各有:   A    E    I    O    U  空白\n");
	printf("               %4d %4d %4d %4d %4d %4d\n",ia,ie,ii,io,iu,is);
    system("pause");
    return(0);
}
