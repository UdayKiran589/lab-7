//interchanging the values of two variables x and y
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the values of x and y: ");

    scanf("%d %d", &x, &y);
    printf("the value of x=%d y=%d\n",x,y);
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("The values of x and y after swapping: x=%d y=%d\n",x,y);
    
    return 0;
}