#if 0

#pragma warning(disable:4996)
#include<cstdio>

int main()
{

	int sum_in;

	long long int num_long_in1, num_long_in2;

	long long int sum_long_in;


	scanf("%lld %lld",&num_long_in1, &num_long_in2);

	if (((num_long_in1 + num_long_in2) <= 2147483647)&&((num_long_in1 + num_long_in2) >= -2147483648))
	{
		sum_in = (int)(num_long_in1 + num_long_in2);
		printf("%d",sum_in);
	}
	else
	{
		sum_long_in = (long long int)(num_long_in1+num_long_in2);
		printf("%lld",sum_long_in);
	}

}
#endif