//program to find the give numbr is a armstrong number 
#include<stdio.h>
int main()
{
    int num, temp, sum = 0,rem;
    printf("enter num");
    scanf("%d", &num);
    temp = num;
    while(num>0)
    {
        rem = num%10;
        sum = sum + rem*rem*rem;
        num = num/10;
    }
    if(sum==temp)
    {
        printf("%d is an armstrong number", temp);
    }
    else{
        printf("%d is not an armstrong number", temp);
    }
}