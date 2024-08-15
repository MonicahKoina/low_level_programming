#include <stdio.h>

int main(void){
	char char1 = 'X';
	char char2 = 'Y';
	char char3 = 'Z';
	printf("The reverse of %c%c%c is %c%c%c\n",
			char1, char2, char3,
			char3, char2, char1);
	return(0);
}
