#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    char c;
    scanf("%d", &n);
    for(int i = 0; i < n / 2 + n % 2; i++){
        if(i % 2 == 1)
            c = '>';
        else c = '<';
        for(int j = 0; j < n; j++){
            if(i > j || j > n - i - 1)
                printf("%c", '-');
            else
                printf("%c", c);
        }
        printf("\n");
    }
    for(int i = n / 2 + n % 2; i < n; i++){
        if(i % 2 == 1)
            c = '>';
        else c = '<';
        for(int j = 0; j < n; j++){
            if(i < j || j + i + 1 < n)
                printf("%c", '-');
            else
                printf("%c", c);
        }
        printf("\n");
    }


    return 0;
}
