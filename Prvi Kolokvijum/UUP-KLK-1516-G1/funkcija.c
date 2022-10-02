#include <stdio.h>
#include <stdlib.h>

int pom(int argument){

    while(argument){
        if(argument % 10 >= 5)
            return 0;
        argument /= 10;
    }
    return 1;
}


int main()
{
    int j, k, rez = 1;
    scanf("%d%d", &j, &k);
    for(int i = j; i <= k; i++){
        if(!pom(i))
            continue;
        rez *= i;
    }
    printf("%d", rez);
    return 0;
}
