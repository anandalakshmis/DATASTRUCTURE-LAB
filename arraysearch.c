#include<stdio.h>
void main()
{
int a[20],i,key,n,f=0;
printf("enter the range:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key:");
scanf("%d",&key);
for(i=0;i<n;i++)
if(a[i]==key)
{
f=1;
break;
}
if(f==1)
{
printf("element found:");
}
else
{
printf("element no found");
}
}


