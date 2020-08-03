#if 0
#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	long long int a, b;

	scanf("%lld %lld",&a, &b);

	printf("%lld",a+b);

}

#endif


/*
변수의 타입을 int로 잡았을 때 범위를 넘어가서 원하는 결과를 출력하지 못함.


점수 = 71 /100

입력 :
1073741824 1073741824

정답
2147483648

현재의 출력결과
-2147483648
*/