#include <stdio.h>
#include <stdlib.h>

int pom(int arg){
    int obrnuti = 0;
    int zamena = arg;
    while(zamena){
        obrnuti = obrnuti * 10 + zamena % 10;
        zamena /= 10;
    }
    if(arg > obrnuti)
        return 1;
    return 0;
}

int main()
{

    int n, rez = 0;
    do{
        scanf("%d", &n);
        if(pom(n))
            rez += n;

    }while(n != 0);
    printf("%d", rez);

    return 0;
}
