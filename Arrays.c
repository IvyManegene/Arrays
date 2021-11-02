#include<stdio.h>
void main()
{
	int numbers[50],size,i,j,temp;
	
	printf("Enter the size of the numbers you need to be sorted=> ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	printf("The numbers in the array before sorting are: \n");	
	for(i=0;i<size;i++)
	{
		printf("%d ",numbers[i]);		
	}
	for(i=0;i<size;i++)
	{
        for(j=i+1;j<size;j++)	 
			{
				if (numbers[i] >numbers[j])
            		{
						temp=numbers[i];
            			numbers[i]=numbers[j];
            			numbers[j]= temp;
					}
			}
	}
    printf("\nThe numbers in the array again after sorting are: ");                 
	for(i=0;i<size;i++)
	{
		printf("%d ",numbers[i]);
	}
}
