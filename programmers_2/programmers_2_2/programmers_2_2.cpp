/* 피보나치 수는 F(0) = 0, F(1) = 1일 때, 1이상의 n에 대하셔 F(n) = F(n-1) + F(n-2)가 적용되는 수이다.
2 이상의 n이 입력되었을 때, n번째 피보나치 수를 1234567으로 나눈 나머지를 리턴하는 함수를 만드시오. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 피보나치 수 구하는 함수(재귀함수)
int fibo(int num)
{
	if (num == 0)
		return 0;

	else if (num == 1)
		return 1;

	else
	{
		return (fibo(num - 1) + fibo(num - 2)) % 1234567;
	}
}

void main()
{
	int F;
	int num;
	int FB[100001];
	FB[0] = 0;
	FB[1] = 1;
	
	printf("정수를 입력하시오 >> ");
	scanf_s("%d", &num);

	// for문으로 풀이
	/*for (int i = 2; i <= num; i++)
	{
		FB[i] = (FB[i - 1] + FB[i - 2]) % 1234567;
	}

	printf("%d", FB[num]);*/
	
	// 재귀함수 사용
	for (int i = 0; i <= num; i++)
	{
		F = fibo(i);
	}

	printf("%d ", F);
}