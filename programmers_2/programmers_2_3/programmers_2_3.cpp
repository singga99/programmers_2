/* n���� ���ڸ� ���� �迭 arr�� �ԷµǾ��� ��, �� ������ �ּҰ������ ��ȯ�ϴ� �Լ��� �ϼ��Ͻÿ�. 
ex) 2�� 7�� �ּҰ������ 14 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	int prime[] = { 2,3,5,7 };

	int arr[] = { 2,3,4 };
	int count = 1;
	int count_2 = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			while (arr[j] % prime[i] == 0)
			{
				arr[j] = arr[j] / prime[i];
				count = count * prime[i];  //�ִ�����
			
			}
		}
	}

	for (int i = 0; i < 3; i++) 
	{
		count_2 = count * arr[i];
	}
	printf("�ּ� ������� %d�̴�.", count * count_2);
}