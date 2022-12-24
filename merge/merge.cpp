#include<stdio.h>
#include<conio.h>
void mearge (inta[],int beg,int mid,int end)
{
int i,j,k;
int n1=mid-beg+1;
int n2=end-mid;
int leftarry[10],rightarry[20];
for(i=0;i<n;i++)
leftarry[i]=a(beg+i);
for(j=0;j<n;j++)
rightarry[j]=a[mid+1+j];
i=0;
j=0;
k=beg;
while(l<n1,&&j<n2)
{
if(leftarry[i]<=rightarry[j])
{
a[k]=leftarry[i];
i++;
}
else
{
a[k]=rihgtarry[j];
j++;
k++;
}
while(i<n1)
{
a[k]=leftarry[i];
i++;
k++;
}
while(j<n2)
{
a[k]=rightarry[i];
j++;
k++;
}
}
void meargsortr(inta[],int beg,int end);
{
if (beg<end)
{
int mid=(beg+end)/2;
meargesort(a,beg,mid);
meargesort(a,mid+1 end);
mearge(a,beg,mid,end);
}
}
void printarry(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void main()
{
int a[]={ 10,20,30,40,50,60};
int n =sizeof (10)/sizeof (a[0]);
printf("befor sorting arry elemant are:-\n");
printarry(a,n);
meargesort(a,0,n-1);
printf ("after sorting arry elemant are :-\n");
printf("\n");
printarry(a,n);
getch();
}
