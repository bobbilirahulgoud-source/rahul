#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int limit[20],base[20],n,i,pa,s,a,d;
printf("\n program for segmentation\n");
printf("\n enter no of segments\n");
scanf("%d",&n);
printf("enter base address and limit register");
for(i=1;i<=n;i++)
{
scanf("%d",&base[i]);
scanf("%d",&limit[i]);
}
printf("\n enter logical addres\n");
scanf("%d",&d);
printf("\n enter segment number\n");
scanf("%d",&s);
for(i=1;i<=n;i++)
{
if(i==s)
{
if(d<limit[i])
{
pa=base[i]+1;
a=base[i];
printf("\n page no \t base.add physical .add \n %d\t %d\t %d\n",s,a,pa);
}
exit(0);
{
printf("page segmentation is overflow");
exit(0);
}}}
printf("invalid page segmentation");
return 0;
}

