#include <stdio.h>
#include <stdlib.h>




void bubblesort(int dizi[],int boyut)
{
	int i,j;
	for(i=0;i<boyut;i++){
		for(j=1;j<boyut-i;j++){
			if(dizi[j-1]>dizi[j]){
				int temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
				
				
			}
		}
	}
	
	
	
	
}




int main()
{
	
	int dizi[100000],eleman;
	
	int i;
	
	eleman=100000;
	
	for(i=0;i<eleman;i++){
		dizi[i]=rand()%10000;
		printf("elemanlar:%d\n",dizi[i]);
	}	
	
	bubblesort(dizi,eleman);
	
	for(i=0;i<eleman;i++){	
	printf("\t Siralanmis numaralar:%d ",dizi[i]);
}
	
	
	
	return 0;
}

