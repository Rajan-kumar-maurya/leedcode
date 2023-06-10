#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i,n;
printf("Enter your no.");
scanf("%d",&n);
for(i=0;i<5;i++)
{ 
if(n==arr[i])
{
printf("Lenear no. - %d",arr[i]);
}

}
return 0;
}