#include<stdio.h>
int main()
{
    int arr[20], i, num, size;
    printf("Specify the number of elements you want to enter (not more than 20 are allowed):\n");
    scanf("%d", &size);
    if(size>20)
    {
    printf("Cannot enter more than 20 elements.\n");
    return 0;
    }
    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter element to search for: ");
    scanf("%d", num);
    for(i=0; i<size; i++)
    {
    if(arr[i]==num)
        {
        printf("%d found at location %d.",num,i+1);
        return 0;
        }
    if(arr[i]!=num)
        {
        printf("The element was not found.");
        return 0;
        }
    }
return 0;
}