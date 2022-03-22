#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 1;
    int n;

    printf("How many terms of Fibonacci sequence do you want to get?: ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
      printf("%i ", a);
      a += b;
      b = a - b;
    }

    return 0;
}
