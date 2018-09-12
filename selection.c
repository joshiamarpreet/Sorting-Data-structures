#include<stdio.h>
#include<conio.h>

void main(){
int i,j,imin,n,temp,arr[10];
printf("enter the numbers of elements in the array\n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\narr[%d]=",i);
	scanf("\n%d",&arr[i]);
}

for(i=0;i<n;i++)
{
	imin=i;
	for(j=i+1;j<n;j++)
	{
		if (arr[j]<arr[imin])
		{
			imin=j;
		}
	}
			temp=arr[imin];
			arr[imin]=arr[i];
			arr[i]=temp;		 
}

printf("\nthe array in ascending order is:\n");
for(i=0;i<n;i++)
{
	printf("\narr[%d]=%d",i,arr[i]);
}
getch(); 

 
}
