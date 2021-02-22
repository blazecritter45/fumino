#include <stdio.h>
int main(){
int a = 0, b = 1, n, temp = 0;
printf("Input the number of numbers to display : ");
scanf("%d", &n);
if(n == 0)
return 0;
else if (n == 1)
{
printf("0");
return 0;
}
else
printf("0 1");
for(int i = 0; i < n - 2; i++)
{
temp = a + b;
a = b;
b = temp;
printf(" %d", temp);
}
}
