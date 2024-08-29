#include <stdio.h>
#include <stdlib.h>

int test(int x);

 int main(void){
    printf("%d", test(94));
    printf("\n");
    printf("%d", test(104));
    printf("\n");
    printf("%d", test(230));
 }
 int test(int x ){
    if( abs(x - 100) <= 10 || abs( x - 200) <= 10 ) {
        return 1;
        return 0;
    }
 }
