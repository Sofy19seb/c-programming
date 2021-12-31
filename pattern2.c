#include <stdio.h>

int main()
{
    int i, j, c;
    printf("Enter the limit : ");
    scanf("%d", &c);
    for (i = 0; i < c; i++){
        for (j = 0; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
}
