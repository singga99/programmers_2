/* n���� ���ڸ� ���� �迭 arr�� �ԷµǾ��� ��, �� ������ �ּҰ������ ��ȯ�ϴ� �Լ��� �ϼ��Ͻÿ�. 
ex) 2�� 7�� �ּҰ������ 14 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	//// �Ҽ� �迭
	//int prime[] = { 2,3,5,7 };

	//int arr[] = { 4, 8, 12 };
	//int count = 1;		
	//int count_2 = 1;	
	//int i = 0;

	//while (true)
	//{
	//	printf("i = %d\n", i);
	//	int arr_c[] = { 0,0,0 };
	//	int sum = 0;

	//	for (int j = 0; j < 3; j++)
	//	{
	//		if (arr[j] % prime[i] != 0)
	//		{
	//			arr_c[j] = arr_c[j] + 1;
	//			printf(" %d\n", arr_c[j]);
	//		}
	//	}
	//	for (int k = 0; k < 3; k++) {
	//		sum = sum + arr_c[k];
	//	}
	//	//printf("%d\n", sum);
	//	if (sum == 0) {
	//		for (int j = 0; j < 3; j++) {
	//			arr[j] = arr[j] / prime[i];
	//		}
	//		count = count * prime[i];
	//	}
	//	printf("%d\n", count);
	//	if (i == 3) { break; }
	//	else { i++; }
	//}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}
	//printf("%d\n", count);
	//for (int i = 0; i < 3; i++) 
	//{
	//	count_2 = count_2 * arr[i];
	//}

	//printf("�ּ� ������� %d�̴�.", count * count_2);

	int prime[] = { 2,3,5,7 };
	int arr[] = { 4,8,12 };
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
		count_2 = count_2 * arr[i];
	}
	printf("�ּ� ������� %d�̴�.", count * count_2);
}