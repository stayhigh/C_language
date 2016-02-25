#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOVIE_NAME "Transformers 2" 
int main(void)
{
	char cStr[15] = "Bumble Bee";
	printf("strlen(MOVIE_NAME) = %d\n",strlen(MOVIE_NAME));
	printf("sizeof(MOVIE_NAME) = %d\n",sizeof(MOVIE_NAME));
	printf("strlen(cStr) = %d\n",strlen(cStr));
	printf("sizeof(cStr) = %d\n",sizeof(cStr));
	system("pause");
	return(0);
}