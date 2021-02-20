#include<stdio.h>
int main(){
int i = 0, len = -1, a_count = 0, vow = 0;
char str[50], str2[50];
printf("Enter string :- ");
fgets(str,sizeof(str),stdin);
while(str[i] != '\0')
{
len++;
if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
a_count++;
if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i]
== 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
vow++;
str2[i]=str[i];
i++;
}
printf("Length of string :- %d\n",len);
printf("Number of alphabets in string :- %d\n",a_count);
printf("Number of vowels in string :- %d\n",vow);
printf("Copy of string :- %s",str2);
return 0;
}
/*fumi fumi ! */ 
