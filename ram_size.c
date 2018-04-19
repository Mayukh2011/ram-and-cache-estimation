#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <fcntl.h>
#define MB 1024*1024
#define STEP_SIZE 256*MB
#define NUM_ITR 128
int main()
{
	
	int *head[NUM_ITR];
	int k=0;
	int l=1;
	int sum=0;
	double timeTaken;
    clock_t start;
    remove("ram.txt");
    int fd=open("ram.txt",O_CREAT|O_WRONLY,0640);
    char buff[100];
	while(k<NUM_ITR){

		int *a=(int *)malloc(STEP_SIZE);

		head[k]=a;

		for(int i=0;i<(STEP_SIZE)/sizeof(float);i++)
		{
			*(a+i)=i;
		}

		start=clock();
		for(int j=0;j<l;j++){

			for(unsigned int z=0;z<(STEP_SIZE)/sizeof(float);z++){
				sum=sum+(*(head[j]+z));
			}
		
	}

		timeTaken = (double)(clock() - start)/CLOCKS_PER_SEC;
        printf(" %4d MB the time taken is :%11.8f \n",256*l, timeTaken);

       sprintf(buff , "%4d,%11.8f\n" , 256*l,timeTaken);
        
        write(fd, buff,17);

			k++;
			l++;
	
}
     

	
return 0;
	
}