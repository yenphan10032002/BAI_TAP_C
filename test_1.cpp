#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for (j = 0; j <= 2*n - 1; j++){
                if ( j >= -i + n-1 && j <= i+n-1){
                      printf("#");
                } else {
                printf(" ");
        }
    }
     printf("\n");
    }
    return 0;
}
