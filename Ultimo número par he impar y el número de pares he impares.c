#include <stdio.h>

int main()
{
int n;
int sum=1;
int cont=1;
int cont2=0;
int npar=0;
int parf=0;
int nimpar;
int cont3=0;
int imparf=0;
printf("introduzca un número, se obtendra el número de pares he impares contendidos en el, además se mostrara cual es último par y el ultimo impar\n");
scanf("%d",&n);
do
{
    if(sum%2==0)
    {
        npar=cont2+1;
        cont2=npar;
        parf=sum;
    }
    else
    {
        nimpar=cont3+1;
        cont3=nimpar;
        imparf=sum;
    }
sum=cont+1;
cont=sum;
}
while(sum<=n);

printf("EL número de pares dentro de tu número es;%d\n",npar);
printf("el número de impares dentro de tu número es;%d\n",nimpar);
printf("el ultimo número par es;%d\n",parf);
printf("el ultimo número impar es;%d\n",imparf);

    return 0;
}
