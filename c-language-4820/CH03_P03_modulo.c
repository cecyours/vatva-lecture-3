#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the Number");
    scanf("%d,%d", &a, &b);

    c = a % b;
    printf("%d %% %d = %d\n", a, b, c);
}