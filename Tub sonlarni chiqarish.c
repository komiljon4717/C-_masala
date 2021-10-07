#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, k, son;
int sanoq=0;

printf("Sonni kiriting\n");
scanf("%d",&son);

for (a=2; a<=son;a++){
    
    for (k=1 ;k<=a;k++){
    
    if (a % k ==0)
    {
        sanoq++;
    }

}
if (sanoq==2){
    printf("%d", a);
}

}

    return 0;
}
