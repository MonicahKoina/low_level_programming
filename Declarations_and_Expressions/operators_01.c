#include <stdio.h>

    int height;
    int width;

    int perimeter;
    int area;

int main(void){
    height=7;
    width=5;

    perimeter=2*(height+width);
    area=(height*width);

    printf("The perimeter of the rectangle is %i inches\n" , perimeter);
    printf("The area of the rectangle is %i inches", area);

    return(0);

}
