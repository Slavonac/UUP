#include <stdio.h>
#include <stdlib.h>

int main(){
int x;

scanf("%d", &x);
if ((x/1000)==(x%10)&&((x/100)%10)==((x%100)/10))
{
  printf("DA");
}


else{printf("NE");}
return 0;
}
