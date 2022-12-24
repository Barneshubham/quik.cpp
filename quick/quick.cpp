#include<stdio.h>
#include<conio.h>
int portition(inta[],int start,int end);
{
int j,t;
int pivot=a[end];
int i=(start-1);
for(j=start;j<=end-1;j++)
{
if (a[j]<pivot)
{
i++;
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[i+1];
a[i+12]=a[end];
a[end]=t;
return(i+1);
}
void quick (int a[],int start,int end)
{
if (start<end)
{
int p=partition(a,start,end);
quick(a,start,p-1);
quick(a,p+1,end);
}
}
void printarr (int a[],int n)
{
int i;
for (i=0;i<n;i++)
printf("%d",a[i]);
}
void main()
{
int a[]={10,20,30,40,50,60,70,80};
int n=sizeof (a)/sizeof (a[0]);
prinf("before sorting arry element are:-\n");
printarry(a,n);
quick(a,0,n-1);
printf("after sorting arry element are :-\n");
printarry(a,n);
getch();
}