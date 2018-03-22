#include "timath.h"

int successes = 0;

void test_mean(){

	double x[] = {1,2,3,4,5,6,7,8,9};

	if( 5 == mean(9, x)) {
		printf("MEAN success\n");
		successes++;
	}else {
		printf("MEAN failure\n");
	}
}

void test_median(){
	double x[] = {1,2,3,4,5,6,7,8,9};

	if( 5 == median(9, x)) {
		printf("MEDIAN success\n");
		successes++;
	}else {
		printf("MEDIAN failure\n");
	}
}

void test_variance(){

	double x[] = {3,3,3,3,7,7,7,7};

	if( 4 == variance(8, x)) {
		printf("VARIANCE success\n");
		successes++;
	}else {
		printf("VARIANCE failure\n");
	}

}

void test_deviation(){

	double x[] = {3,3,3,3,7,7,7,7};

	if( 2 == deviation(8, x)) {
		printf("DEVIATION success\n");
		successes++;
	} else {
		printf("DEVIATION failure\n");
	}
}

int main(int argc, char const *argv[])
{
	printf("\n --- TEST BEGINS ---\n\n");
	test_mean();
	test_median();
	test_variance();
	test_deviation();

	printf("\n --- TEST ENDS --- \n \n");
	printf("%d / 4 TESTED SUCCESSFULLY \n\n", successes);

	return 0;
}
