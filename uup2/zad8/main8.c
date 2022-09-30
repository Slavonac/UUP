#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mesec, god;
    printf("Unesi mesec:");
    scanf("%d", &mesec);
    if(mesec==2)
    {
        printf("Unesi godinu: ");
        scanf("%d", &god);
        if((god%4)==0)printf("29");
        else printf("28");
    }

    switch(mesec)
    {
        case 1:printf("31");break;
        case 3:printf("31");break;
        case 4:printf("30");break;
        case 5:printf("31");break;
        case 6:printf("30");break;
        case 7:printf("31");break;
        case 8:printf("31");break;
        case 9:printf("30");break;
        case 10:printf("31");break;
        case 11:printf("30");break;
        case 12:printf("31");break;

    }
    return 0;
}
