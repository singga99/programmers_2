/* �־��� ���� �� 3���� ���� ������ �� �Ҽ��� �Ǵ� ����� ������ ���Ϸ��� �Ѵ�.
���ڵ��� ����ִ� �迭 nums�� �Ű������� �־��� ��, nums�� �ִ� ���ڵ� �� ���� �ٸ� 3���� ��� ������ �� �Ҽ��� �Ǵ� ����� ���� return�ϵ��� �Ͻÿ�. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ҽ� ���ϴ� �Լ�
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
	int n; // ���� �Է� ����
	int count = 0; // �Ҽ� ����
	int sum = 0;
	int nums[10] = { 0, };

	printf("�Է��� ���� ������ �����ÿ� >> ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ��° ������ �Է��Ͻÿ� >> ", i + 1);
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
					printf("�Ҽ��� ���� >> %d\n", sum);
					count++;
				}
			}
		}
	}

	printf("�Ҽ��� ���� >> %d\n", count);
}
