#include <stdio.h>
#include <stdlib.h>

char toLowerCase(char c){
    if('a' - c <= 0)
        return c;
    return c + 32;
}


int main()
{

    char ch;
    int ascii = 0;

    while((ch = getchar()) != '\n'){
        if(toLowerCase(ascii) - toLowerCase(ch) == -1)
            continue;
        putchar(ch);
        ascii = ch;
    }
    return 0;
}
