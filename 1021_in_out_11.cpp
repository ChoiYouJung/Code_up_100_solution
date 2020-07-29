#if 0
#pragma warning(disable: 4996)
#include<cstdio>

int main()
{
	char data[51] = "";
	
	//scanf_s("%s",data);
	//scanf_s사용시 에러가 발생한다.

	scanf("%s",data);
	printf("%s", data);

	return 0;
}
#endif