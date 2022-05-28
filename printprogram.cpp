#include <iostream>
using namespace std;

int main()
{
	int row, c, n;
	
	printf("Enter the number of rows in pyramid of stars to print\n");
	scanf("%d", &n);
	
	for(row = 1; row <= n; row++) // Loop to print rows
	{
		for (c = 1; c <= n-row; c++)
		  printf(" ");
		  
		for (c =1; c <= 2*row -1; c++)
		  printf("*");
		  
		printf("\n");
	}
	
	return 0;
}
