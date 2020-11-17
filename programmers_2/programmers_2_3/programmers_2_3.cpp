/* n개의 숫자를 담은 배열 arr이 입력되었을 때, 이 수들의 최소공배수를 반환하는 함수를 완성하시오. 
ex) 2와 7의 최소공배수는 14 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
	//// 소수 배열
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

	//printf("최소 공배수는 %d이다.", count * count_2);

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
				count = count * prime[i];  //최대공약수

			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		count_2 = count_2 * arr[i];
	}
	printf("최소 공배수는 %d이다.", count * count_2);
}