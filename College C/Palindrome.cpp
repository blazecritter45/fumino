#include <stdio.h>
int main(){
int n, digit, reverse, original = 0;
scanf("%d", &n);
original = n;
while(n != 0)
{
digit = n%10;
reverse = reverse * 10 + digit;
n /= 10;
}
printf("Reverse of number is %d \n", reverse);
if(reverse == original)
printf("Number %d is a palindrome", original);
else
printf("Number %d is not a palindrome", original);
return 0;
}
