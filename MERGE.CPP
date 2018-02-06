//Implementation of merge sort
#include<stdio.h>
#include<conio.h>
void simplemerge(int a[],int f,int s,int t)
{
int i,j,k,w;
int temp[100];
i=f;
j=s;
k=-1;
while(i<=s-1 && j<=t)
{
if(a[i]<a[j])
{
k++;
temp[k]=a[i];
i++;
}
else
{
k++;
temp[k]=a[j];
j++;
}
}
if(i>s-1)
{
for(w=j;w<=t;w++)
{
k++;
temp[k]=a[w];
}
}
else
{
for(w=i;w<=s-1;w++)
{
k++;
temp[k]=a[w];
}
}
//copy temp array back in to array a
for(w=0;w<=k;w++)
a[f+w]=temp[w];
}
void mergesort(int a[],int left,int right)
{
int mid;
if(left<right)
{
mid = (left+right)/2;
mergesort(a,left,mid);
mergesort(a,mid+1,right);
simplemerge(a,left,mid+1,right);
}
}
void main()
{
int a[100],n,i;
clrscr();
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("Enter element%d",(i+1));
scanf("%d",&a[i]);
}
//sort the array
mergesort(a,0,n-1);
printf("Sorted elements are\n");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
getch();
}
//**********************output******************************
Enter the number of elements 5
Enter element1 100
Enter element2 90
Enter element3 80
Enter element4 70
Enter element5 60
Sorted elements are
60
70                                                                              
80                                                                              
90                                                                              
100                                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

