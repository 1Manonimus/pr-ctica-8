#include <stdio.h>

int main()
{
    int i=1;
    int n=1;
    int acum=0;
    int sum;
    printf("Introduce cualquier números, estos seran sumados cuando finalice el algoritmo cuando introduzca el número 0.\n");
    
    while(n !=0)
    {
        printf("introduce el número %d\n",i);
        scanf("%d",&n);
        sum=acum+n;
        acum=sum;
        i=i+1;
    }
    printf("Finalizando: Se ha introducido el número 0\n");
    printf("la suma total es; %d\n",sum);

    return 0;
}
