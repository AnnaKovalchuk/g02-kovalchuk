#include <stdlib.h>
#include <stdio.h>

#define m_max 100
int mark[m_max];

#define mmin 2
#define mmax 5

#define mpass 4.6f

int main()
{
int n;
printf("n: ");
scanf("%d", &n);
if(n > 100 || n <= 0)
{
    printf("error\n");
    return 0;
}

printf("mark: ");
for(int i = 0; i < n; i++)
{
    scanf("%d", &mark[i]);
}
printf("\n");

int sum = 0;
for(int i = 0; i < n; i++)
{
    sum += mark[i];
}
printf("sum: %d", sum);
printf("\n");

float avg;
avg = (float)sum / (float)n;

printf("avg: %.1f\n", avg);
if(avg >= mpass) printf ("yes\n");
else printf("no\n");

    return 0;
}