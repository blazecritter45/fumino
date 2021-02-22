#include<stdio.h>
int main(){
int arr[20],i,num,size;
printf("How many numbers do u wanna enter(not more than 20 allowed):\n");
scanf("%d",&size);
if(size>20){
printf("Can not enter numbers more than 20");
return 0;
}
printf("Enter %d elements:\n",size);
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
printf("Enter element to search");
scanf("%d",num);
for(i=0;i<size;i++)
{
if(arr[i]==num)
{
printf("%d found at location %d",num,i+1);
return 0;
}
if(arr[i]!=num)
{
printf("number not found");
return 0;
}
}
return 0;
}
