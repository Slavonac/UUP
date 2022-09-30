#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slovo, asciibr;
    scanf("%c", &slovo);
    asciibr=slovo;
    if (asciibr>92){
        asciibr=slovo-32;
    }
    else asciibr=slovo+32;

    printf("%c",asciibr );

    return 0;
}
