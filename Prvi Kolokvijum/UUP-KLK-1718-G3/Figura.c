#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n / 2 + n % 2; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n / 2 + n % 2 - 1 || j - i == n / 2)
                printf("^");
            else if(i + j > n / 2 - 1 && j - i < n / 2)
                printf("*");
            else{
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
    for(int i = n / 2 + n % 2; i > 0; i--){
        for(int j = 0; j < n; j++){
            if(i + j == n / 2 + n % 2 || j - i == n / 2 - 1)
                printf("^");
            else if(i + j > n / 2  && j - i < n / 2)
                printf("*");
            else{
                printf("%c", i + 'a' - 1);
            }
        }
        printf("\n");
    }

    return 0;
}
