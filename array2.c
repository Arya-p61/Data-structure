#include<stdio.h>
void main()
{
int a[50],i,n;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Even Numbers are");
for(i=0;i<n;i++)
{
if (a[i]%2==0)
printf("%d",a[i]);
}}

