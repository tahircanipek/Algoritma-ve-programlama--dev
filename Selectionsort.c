#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionsort(int dizi[])
{

    int j,temp,min;
    int n;
    n=100000;

    for(int i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            min=j;



            if (dizi[min] < dizi[i])
            {
                temp=dizi[i];
                dizi[i]=dizi[min];
                dizi[min]=temp;
            }
        }

    }
    printf("--------------------------------------------------------------------------------------------------\n");

}

int main()

{
	
    int dizi[100000];
    int i;

    srand(time(0));
    for (i=0; i<100000; i++)
    {
        dizi[i]=rand()%10000;
    }

    for (i=0; i<100000; i++)
    {

        printf("Random sayilar=%d\n",dizi[i]);
    }
    selectionsort(dizi);
      for (i=0; i<100000; i++)
    {

        printf("Siralanmis sayilar=%d\n",dizi[i]);
    }
    
    return 0;

}