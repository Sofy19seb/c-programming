#include <stdio.h>

int main()
{
    int i, j, c;
    printf("Enter the limit : ");
    scanf("%d", &c);
    for (i = 0; i < c; i++)
    {
        for (j = c; j > i; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
