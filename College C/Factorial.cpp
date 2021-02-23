#include<stdio.h>
int main(){
int n = 0, answer = 1;
scanf("%d", &n);
if(n < 0)
{
printf("Cannot calculate factorial of negative numbers");
return 0;
}
else
{
for(int i = 1; i <= n; i++)
answer *= i;
}
printf("Factorial of %d is %d", n, answer);
return 0;
}
/* Testing a commit with fumi chan */
/* UwU */
