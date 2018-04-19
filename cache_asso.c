#include<stdio.h>
#include<time.h>
#define KB 1024
#define MB (1024*1024)
#define ARR_LEN 64*MB
#define steps (64*1024*1024)
int main()
{


	int *arr = (int*)malloc(ARR_LEN*sizeof(int));

	for(int i=0;i<ARR_LEN;i++)
	{
		arr[i]=1;
	}

	int stride=2;

	while(stride<ARR_LEN/2 )
	{	


		clock_t start;
		int lengthMod = ARR_LEN - 1;
		start=clock();
		for (int i = 0; i < steps; i++)
		{
				 arr[(i * stride) & lengthMod]++; 
		}
		double timeTaken = (double)(clock() - start)/CLOCKS_PER_SEC;
		printf("%d:%0.8f\n",stride,timeTaken/1000);

		   stride =stride*2;
	}
	return 0;

}