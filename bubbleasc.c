#include<stdio.h>
#include<conio.h>

void main(){
int i,j,n,temp,arr[10];
printf("enter the numbers of elements in the array\n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\narr[%d]=",i);
	scanf("\n%d",&arr[i]);
}

for(i=0;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if (arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			
		 } 
		 
	}
}
printf("\nthe array in ascending order is:\n");
for(i=0;i<n;i++)
{
	printf("\narr[%d]=%d",i,arr[i]);
}
getch();
 
}
