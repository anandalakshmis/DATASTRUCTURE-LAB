#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j,k;
printf("Enter the size of the first array:\n");
scanf("%d",&m);
printf("Enter the first array elemnts:\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of 2array:\n");
scanf("%d",&n);
printf("Enter the second array elements:\n");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<m&&j<n){
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m){
while(j<n){
c[k]=b[j];
j++;
k++;
}
}
if(j>=n){
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
printf("After Merging\n");
for(i=0;i<k;i++)
{
printf("%d",c[i]);
}
}
