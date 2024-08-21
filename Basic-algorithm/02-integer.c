/* 
Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.
Expected Output:

6
21
0
*/
#include <stdio.h> 

int test(int n); 

int main(void)
{
    printf("%d", test(53));

    printf("\n");

    printf("%d", test(30));

    printf("\n");

    printf("%d", test(51));
}

int test(int n)
{
    const int x = 51; 

    if (n > x) 
    {
        return (n - x) * 3; 
    }

    return x - n; 
}
