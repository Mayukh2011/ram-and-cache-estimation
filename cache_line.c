#include<stdio.h>
#include<time.h>

#define arr_size 64*1024*1024
int arr[arr_size];
int main()
{
	
	

	clock_t start;
	clock_t start1;
	for(unsigned long int i=0;i<arr_size;i++ )
	{
		arr[i]=1;
	}
	
	unsigned long int step=1;
	while(step<=arr_size)
{
	

	
    start1=clock();
	for(unsigned long int k=0;k<arr_size;k=k+step)
	{
		arr[k]=arr[k]*3;
	}
	double timeTaken1 = (double)(clock() - start1)/CLOCKS_PER_SEC;
    printf("%llu:%0.8f \n",step,timeTaken1*1000);
	step=step*2;
	
}
	return 0;

}