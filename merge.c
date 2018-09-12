 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 void mergesort(int x)
 {
 	int nl,nr,i,mid,l,j,m,beg=0;
	 int left[x],right[x],arr[x];
 	if(x<2)
 	return ;
 	else
 	{
 		mid=x/2;
 		nl=mid;nr=x;;
 		 for (i = 0; i < nl; i++)
   	    	left[i] = arr[l + i];
    	for (j = 0; j < nr; j++)
 	       right[j] = arr[m + 1+ j];
 	mergesort(nl);
 	mergesort(nr);
 	mergesorta(arr,nl,nr,beg);	 
	 }

 }
 
void mergesorta(int arr[],int nl,int nr,int beg)
 {
 	int i=beg,j=nl+1,z,arr1[10],k=beg;
 	while(i<nl && j<nr)
 	{
 		if(arr[i]<=arr[j])
 		{
 			arr1[k]=arr[i];
 			i=i+1;
 		}
		 else
		 {
 			arr1[k]=arr[j];
 			j=j+1;
 		 }
 		 k=k+1;
 	}
	if(i<nl)
	{
		
 			arr1[k]=arr[i];
 			i=i+1;
 			k=k+1;
	}
	if(j<nr)
	{
		
 			arr1[k]=arr[j];
 			j=j+1;
 			k=k+1;
	}
 			for(z=beg;z<k;z++)
 			arr[z]=arr1[z];

}
		 

void main()
{
	int i,n,arr[10];
	printf("enter the numbers of elements in the array upto 10 elements\n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("\narr[%d]=",i);
			scanf("\n%d",&arr[i]);
		} 
 
mergesort(n);	 
printf("The sorted array is:\n");

	for(i=0;i<n;i++)
		{
			printf("%d\t=",arr[i]);
		} 

getch();		 	 
}
