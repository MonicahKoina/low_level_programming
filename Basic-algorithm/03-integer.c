#include <stdio.h>

int test(int x, int y);

int main(void){
    printf("%d", test(25, 5));
    printf("\n");
    printf("%d", test(30, 70));
    printf("\n");
    printf("%d", test(60, 40));    
}
int test(int x, int y){
    return(x == 30 || y==30 || (x+y ==30) );
}