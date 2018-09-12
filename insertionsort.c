#include<stdio.h>
#include<conio.h>

void main(){
int i,j,n,k,temp,arr[10];
printf("enter the numbers of elements in the array\n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\narr[%d]=",i);
	scanf("\n%d",&arr[i]);
}

for(i=1;i<n;i++)
{
	temp=arr[i];
	j=i-1;
	while(temp < arr[j] && (j>= 0))
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=temp;
}
printf("\nthe array in sorted form is:\n");
for(i=0;i<n;i++)
{
	printf("\narr[%d]=%d",i,arr[i]);
}
getch(); 
 
}
