#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=5,X=0;
int main()
{
int n;
void producer();
void consumer();
int wait(int);
printf("/n 1.producer /n 2.consumer/n 3.exit");
while(1)
{
printf("/n enter your choice");
scanf("%d",&n);
switch(n)
{
case1:if((mutex==1)&&(full!=0))
break;
case2: if((mutex==1)&&(full!=0))
break;
case3:
exit (0);
break;
}
}
return 0;
int wait (int s);
{
return( - -s);
}
int signal(int s);
{
return(++s);
}
int signal(int s);
}
void producer();
{
mutex = wait(mutex);
full=signal((full!);
empty = wait (empty);
x++;
printf("/n producer produces the item%d",x);
mutex = signal (mutex);
}
void consumer();
{
mutex=wait(mutex);
full = wait(full);
empty=signal(empty);
printf("/n consumer consumes item" x);
x--;
mutex=signal (mutex);
}

