#include<stdio.h>
#include<stdlib.h>
void main()
{
int nb,i,j,count;
printf("enter the number of bits:");
scanf("%d",&nb);
int nbarr[nb];
printf("enter the bits:");
for(i=0;i<nb;i++)
scanf("%d",&nbarr[i]);
int resultsize=16+nb+(nb/5)+1;
int resultcount=0;
int*result=(int*)malloc(resultsize * size of (int));
int patter[]={0,1,1,1,1,1,1,0}
for(i=0,i<8,i++)
*(result+result(count++)pattern[i];
for(i=0,i<nb,i++)
{
result[result count++]=nbarr[i];
if(nbarr[i]==1)
{
count=1;
for(j=i+1;j<i+s && j<nb;j++)
{
if(nbarr[j]==1)count++;
result[resultcount++]=nbarr[j];
if(count==5)
{
result[resultcount++]=0;
break;
}
}
i=j;
}
}
for(i=0;i<8;i++)
*(result+resultcount++)=pattern[i];
result=((int*)realloc(result,resultant * size of(int));
printf("\ninput array:\n[");
for(i=0;i<nb;i++)
printf("%d",nbarr[i]);
printf("]\nbit stuffed array:\n[");
for(i=0;i<resultcount;i++)
printf("%d",result[i]);
printf("]\nresulting array size:%d\n",resultcount);
free(result);
}

