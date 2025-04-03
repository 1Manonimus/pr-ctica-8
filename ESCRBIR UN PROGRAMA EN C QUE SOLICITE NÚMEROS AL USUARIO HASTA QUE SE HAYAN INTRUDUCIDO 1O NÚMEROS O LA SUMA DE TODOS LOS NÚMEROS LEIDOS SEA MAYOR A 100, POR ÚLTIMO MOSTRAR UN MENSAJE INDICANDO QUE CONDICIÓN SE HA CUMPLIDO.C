#include <stdio.h>

int main()
{
int i=1;
int n;
int sum;
int cont=0;

printf("introduzca 10 números, estos se sumaran a menos que con aterioridad la suma supere 100\n");
do
{
    printf("introduzca el valor %d\n",i);
    scanf("%d",&n);
    sum=n+cont;
    cont=sum;
    i=i+1;
}
while (i<=10 && sum<100);

if(sum>100)
{
    printf("la suma supero a 100, la suma fue;%d\n",sum);
}
else
{
printf("la suma es;%d\n",sum);
}

    return 0;
}
