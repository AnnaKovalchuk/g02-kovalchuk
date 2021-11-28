#include <stdio.h>
#include <stdlib.h>

int main()
{
	#define rows 25
	#define cols 5

	int tab[rows][cols];

	#define mark0 2
	#define mark1 5

	for(int y = 0; y < rows; y++)
		for(int x = 0; x < cols; x++)
			tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

	float avg[rows];
	float avg1[cols];	
	
    for(int y = 0; y < rows; y++)
	{
		int s = 0;
		for(int x = 0; x < cols; x++)
		{
			s += tab[y][x];
		}
		avg[y] = s / (float)cols;
	}

	printf("num");
	for(int x = 0; x < cols; x++)
	{
		printf("\t%d", x + 1);
	}

	printf("\tavg\n");

	for(int y = 0; y < rows; y++)
	{
		printf("%d", y + 1);
		for(int x = 0; x < cols; x++)
		{
			printf("\t%d", tab[y][x]);
		}
		printf("\t%.1f\n", avg[y]);
	}
	
    float mark2 = 6;
	int sub = 0;
	
    for(int y = 0; y < cols; y++)
	{
		int s = 0;
		for(int x = 0; x < rows; x++)
		{
			s += tab[x][y];
		}
		avg1[y] = s / (float)rows;
		if(avg1[y]<mark2)
		{
		    mark2=avg1[y];
		    sub=y+1;
		}
	}

    printf("Wrost subject: %d\n", sub);

return 0;
}