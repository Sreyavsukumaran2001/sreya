#include <stdio.h>
#include<stdlib.h>
int st[50];
int sp=-1;
void main()
{
int opt,item;
void push1(int);
int pop1();
do
{
printf("1.push:\n");
printf("2.pop:\n");
printf("3.exit:\n");
printf("option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("data:");
scanf("%d",&item);
push1(item);
break;
case 2:item=pop1();
printf("poped %d",item);
break;
case 3:exit(0);
}
}
while(1);
}
void push1(int item)
{
if(sp!=50-1)
{
sp=sp+1;
st[sp]=item;
}
else
{
printf("stack is full");
}
}
int is_empty()
{
if(sp==-1)
return 1;
else
return 0;
}
int pop1()
{
int item;
if(! is_empty())
{
item=st[sp];
sp=sp-1;
return item;
}
}



