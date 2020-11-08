/* �Ǻ���ġ ���� F(0) = 0, F(1) = 1�� ��, 1�̻��� n�� ���ϼ� F(n) = F(n-1) + F(n-2)�� ����Ǵ� ���̴�.
2 �̻��� n�� �ԷµǾ��� ��, n��° �Ǻ���ġ ���� 1234567���� ���� �������� �����ϴ� �Լ��� ����ÿ�. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ǻ���ġ �� ���ϴ� �Լ�(����Լ�)
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
	
	printf("������ �Է��Ͻÿ� >> ");
	scanf_s("%d", &num);

	// for������ Ǯ��
	/*for (int i = 2; i <= num; i++)
	{
		FB[i] = (FB[i - 1] + FB[i - 2]) % 1234567;
	}

	printf("%d", FB[num]);*/
	
	// ����Լ� ���
	for (int i = 0; i <= num; i++)
	{
		F = fibo(i);
	}

	printf("%d ", F);
}