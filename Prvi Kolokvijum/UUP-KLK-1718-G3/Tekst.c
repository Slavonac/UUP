#include <stdio.h>
#include <stdlib.h>

int obrni(int n){
    int obrnuti = 0;
    while(n){
        obrnuti = obrnuti * 10 + n % 10;
        n /= 10;
    }
    return obrnuti;
}

int main()
{
    char ch, br;
    int stanje = 1;
    int temp = 0;
    while((ch = getchar()) != '\n'){
        if(ch == ')')
            stanje--;
        if(ch == '(' && stanje == 1){
            stanje++;
        }else if(ch == '(' && stanje == 2){
            while((ch = getchar()) != ')'){
                temp += ch - '0';
            }
            int obrnuti = obrni(temp);
            while(obrnuti){
                putchar(obrnuti % 10 + '0');
                obrnuti /= 10;
            }
            temp = 0;
            continue;
        }

        putchar(ch);


    }
    return 0;
}
