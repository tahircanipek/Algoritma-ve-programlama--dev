#include <stdio.h>
#include <stdlib.h>

void quicksort(int dizi[100000],int bas,int son)
{
	int i,j,pivot,temp;
	i=bas;
	j=son;
	pivot=dizi[(i+j)/2];
	
	do 
	{
		while(dizi[i]<pivot)
		i++;
		while(dizi[j]>pivot)
		j--;
		if(i<=j)
		{
			temp=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=temp;
			i++;
			j--;
		}
	} while(i<j);
	if(i<son)
	quicksort(dizi,i,son);
	if(bas<j)
	quicksort(dizi,bas,j);
	
	
}
int main()
{
	
	int dizi[100000];
	int n=100000;
	int i,bas,son;
	bas=0;
	son=100000;
	
	for(i=0;i<100000;i++){
		dizi[i]=rand()%10000;
		printf("elemanlar:%d\n",dizi[i]);
	}	
	
	quicksort(dizi,bas,son);
	
	for(i=0;i<100000;i++){	
	printf("Siralama:%d\n",dizi[i]);
}
	
	
	
	
	
	
	
	
	
}