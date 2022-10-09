#include <stdio.h>
#include <stdlib.h>

int pom(int arg){
    int maxc = 0;
    int zamena = arg;
    while(zamena){
        if(zamena % 10 > maxc)
            maxc = zamena % 10;
        zamena /= 10;
    }
    int mnozilac = 1;
    int zamena1 = 0;

    while(arg){
        if(arg % 10 == maxc){
            arg /= 10;
            continue;
        }

        zamena1 = zamena1 + mnozilac * (arg % 10);
        mnozilac *= 10;
        arg /= 10;
    }


    return zamena1;
}

int main()
{
    int n;
    while(n != 0){
        scanf("%d", &n);
        printf("%d\n", pom(n));
    }
    return 0;
}
