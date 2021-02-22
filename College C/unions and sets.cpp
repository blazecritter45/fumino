#include<stdio.h>
int main()
{
int set1[10], set2[10],union_res[20], i, j, k, size,flag;
printf("Enter number of elements in set (not more than 10):\n");
scanf("%d",&size);
if(size > 10 || size < 1)
{
printf( "Not allowed");
return 0;
}
printf("Enter %d elements in set 1:\n",size);
for(i = 0;i < size; i++)
{
scanf("%d",&set1[i]);
}
printf("Enter %d elements in set 2:\n",size);
for(i = 0;i < size; i++)
{
scanf("%d",&set2[i]);
}
int choice;
printf("************MENU************\n1. Union\n2. Intersection\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
for(i = 0;i < size; i++)
{
union_res[i] = set1[i];
}
k = i;
for(i = 0;i<size;i++)
{
flag = 0;
for(j=0;j<size;j++)
{
if(set2[i]== set1[j])
{
flag = 1;
break;
}
}
if(flag == 0)
{
union_res[k] = set2[i];
k++;
}
}
printf("************Union of sets**************\n");
for(i = 0;i<k;i++)
{
printf("%d\t",union_res[i]);
 }
break;
case 2:
k = 0;
for(i = 0;i<size;i++)
{
flag = 0;
for(j=0;j<size;j++)
{
if(set2[i]== set1[j])
{
flag = 1;
break;
}
}
if(flag == 1)
{
union_res[k] = set2[i];
k++;
}
}
printf("************Intersection of sets**************\n");
for(i = 0;i<k;i++)
{
printf("%d\t",union_res[i]);
 }
break;
default:
printf("Wrong choice");
}
return 0;
}
