/* 주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 한다.
숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 수를 return하도록 하시오. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 소수 구하는 함수
int primenumber(int n)
{
	if (n <= 1)
		return 0;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}

	return 1;
}

void main()
{
	int n; // 숫자 입력 개수
	int count = 0; // 소수 개수
	int sum = 0;
	int nums[10] = { 0, };

	printf("입력할 숫자 개수를 적으시오 >> ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d 번째 정수를 입력하시오 >> ", i + 1);
		scanf_s("%d", &nums[i]);
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = nums[i] + nums[j] + nums[k];

				if (primenumber(sum) == 1)
				{
					printf("소수인 숫자 >> %d\n", sum);
					count++;
				}
			}
		}
	}

	printf("소수의 개수 >> %d\n", count);
}
