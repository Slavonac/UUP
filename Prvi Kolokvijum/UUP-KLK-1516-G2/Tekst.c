#include <stdio.h>
#include <stdlib.h>

//10A3B1C

int main()
{
    char ch;
    int broj = 0;
    int mnozilac = 1;

    while((ch = getchar()) != '\n'){
        if(ch >= '0' && ch <= '9'){
            broj = broj * mnozilac + (ch - '0');
            mnozilac *= 10;

        }
        else{
            for(int i = 1; i <= broj; i++){
                putchar(ch);
            }
            broj = 0;
            mnozilac = 1;
        }

    }
    return 0;
}
