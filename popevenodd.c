#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int arr1[10];
for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
        arr1[i]=2;
        }
        else
        {
        arr1[i]=4;
        }
    }
   for(int i=0;i<10;i++) 
   {
   printf("%d \n",arr1[i]);
   }
return 0;
}
