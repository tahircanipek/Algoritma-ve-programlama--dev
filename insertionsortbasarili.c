#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void insertsort(int dizi[],int boyut)
{
	int i,j;
	int eleman;
	
	for(i=1;i<boyut;i++){
		eleman=dizi[i];
		j=i-1;
		
		while (j>=0 && dizi[j]>eleman){
			dizi[j+1]=dizi[j];
			j--;
	
		}
	
	dizi[j+1]=eleman;
	
	
	
	}
	
	
}


int main()
{
	int dizi[100000],boyut;
	int i;
	
	
	srand(time(0));
	for(i=0;i<boyut;i++){
		dizi[i]=rand()%100000;
		printf("sayilar: %d\t",dizi[i]);
	}
	
	insertsort(dizi,boyut);
	
	for(i=0;i<boyut;i++){
		printf("siralama: %d\t",dizi[i]);
	}
	
	
	
	
	
	return 0;
}














































































/*int main()
{
	
	int i;
	int sonuc;
	
	sonuc=0;
	
	for(i=0;i<=100;i++)
	{
		sonuc += i;
		
	}
	
	

		printf("%d\n",sonuc);
		
		sonuc = sonuc*sonuc;
		
		printf("sonuc:%d\n",sonuc);
		
		
		int a,toplam;
	
	     
	     for(a=0;a<=100;a++)
	     {
	     	
	     	toplam=a*(a+1)*(a*2+1)/6;
	     
	     	
	     	
		 }
	
		
		
	printf("toplam:%d\n",toplam);
	
	
	
	
	
	
	return 0;
}*/