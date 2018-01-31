//Implementation of selection sort Algorithm
#include<stdio.h>
#include<conio.h>
void selectionsort(int a[],int n)
{
int min,p,t,i,j;
for(i=0;i<=n-2;i++)
{
min=a[i];
p=i;
for(j=i+1;j<=n-1;j++)
{
if(a[j]<min)
{
min=a[j];
p=j;
}
t=a[i];
a[i]=a[p];
a[p]=t;
}
}
}
void main()
{
int a[100];
int n,i;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter elements %d ",(i+1));
scanf("%d",&a[i]);
}
selectionsort(a,n);
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}
//**********************output*********************
Enter the number of elements: 5
Enter elements 1 100                                                            
Enter elements 2 90                                                             
Enter elements 3 80                                                             
Enter elements 4 70                                                             
Enter elements 5 60
60                                                                              
70                                                                              
80                                                                              
90                                                                              
100                                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
