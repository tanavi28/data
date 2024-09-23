#include<stdio.h>
void main()
{
int nb,i,fs,count=0;
printf("enter the no.of bits:");
scanf("%d",&nb);
int nbarr[nb];
printf("enter the bits:");
for(i=0;i<nb;i++)
scanf("%d",&nbarr[i]);
printf("enter the frame size:");
scanf("%d",&fs);
while(count!=nb)
{
printf("[");
for(i=0;i<fs;i++)
{
if(count==nb) printf("\t 0");
else printf("\t %d",nbarr[count++]);
}
printf("\t ]\n");
}
}
