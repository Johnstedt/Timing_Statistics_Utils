#include "timath.h"

double getWallTime()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    
    double currently = t.tv_sec + t.tv_usec / 1000000.0;
    
    return currently;
}

double median(int n, double x[]) 
{
    double temp;
    int i, j;
    
    for(i=0; i<n-1; i++) // the following two loops sort the array x in ascending order
    {
        for(j=i+1; j<n; j++) 
        {
            if(x[j] < x[i]) 
            {
                // swap elements
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    if( n%2 == 0 ) 
    {
        return((x[n/2] + x[n/2 - 1]) / 2.0);   // if there is an even number of elements, return mean of the two elements in the middle
    } else 
    {
        return x[n/2]; // else return the element in the middle
    }
}

double mean(int n, double x[])
{
	double mean = 0;
	for(int i = 0; i < n; i++)
	{
		mean += x[i];
	}

	mean = mean / n;

	return mean;
}

double variance(int n, double x[])
{
	double variance = 0;
	double m = mean(n, x);

	for(int i = 0; i < n; i++)
	{
		variance = variance + pow((x[i] - m), 2);
	}
	variance = variance / n;

	return variance;
}

double deviation(int n, double x[])
{
	double deviation;
	double v = variance(n, x);

	deviation = sqrt(v);

	return deviation;
}