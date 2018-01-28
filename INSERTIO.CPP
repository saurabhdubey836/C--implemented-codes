//Implementation of insertion sort
#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n)
{
int x;
int i,j;
for(i=1;i<n-1;i++)
{
x=a[i];
j=i;
while(j>0 && a[j-1]<x)
{
	a[j]=a[j-1];
	j=j-1;
}
a[j]=x;
}
}
void main()
{
int a[100],i,n;
clrscr();
printf("Enter no of elements");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
	printf("Enter element %d: ",(i+1));
	scanf("%d",&a[i]);
}
insertionsort(a,n);
printf("\nSorted elements are");
for(i=0;i<=n-1;i++)
printf("%d\n",a[i]);
getch();
}
//**********************output*********************
/*
Enter no of elements10
Enter element 1: 100
Enter element 2: 90
Enter element 3: 80
Enter element 4: 70
Enter element 5: 60
Enter element 6: 50
Enter element 7: 40
Enter element 8: 30
Enter element 9: 20
Enter element 10: 10

Sorted elements are100
90
80
70
60
50
40
30
20
10
  */
                                                                                
                                                                                




