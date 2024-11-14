//programe to print fibonacci numbers upto N
#include <stdio.h>
int main()
{
    int N, a = 0, b = 1, c;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Fibonacci series upto %d numbers:\n", N);
    printf("%d ", a);
    for(int i = 2;i<N;i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}