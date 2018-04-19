#include<stdio.h>
#include<time.h>
#define cache_line (64/sizeof(int))
#define KB 1024
#define MB (1024*1024)
#define k_val 120*MB
#define steps (64*1024*1024)

int main()
{
	

	
			unsigned long int k=1;
		while((k*256*sizeof(int))<=k_val){
						
		
			
			int arr_len=k*256;	
			int *arr = (int*)malloc(arr_len*sizeof(int));
		

			for(int i=0;i<(arr_len);i++)
			{
				arr[i]=1;
			}
			
			
			clock_t start;
			int lengthMod = arr_len - 1;
				
				start=clock();
				for (int i = 0; i < steps; i++)
				{
   					 arr[(i * 16) & lengthMod]++; 
				}
				double timeTaken = (double)(clock() - start)/CLOCKS_PER_SEC;
		    		printf("%d:%0.8f\n",(arr_len*sizeof(int)),timeTaken/1000);
			
			k=k*2;


		}
		   

	

	return 0;

}