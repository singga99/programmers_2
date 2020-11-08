/* n개의 숫자를 담은 배열 arr이 입력되었을 때, 이 수들의 최소공배수를 반환하는 함수를 완성하시오. 
ex) 2와 7의 최소공배수는 14 */

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
				count = count * prime[i];  //최대공약수
			
			}
		}
	}

	for (int i = 0; i < 3; i++) 
	{
		count_2 = count * arr[i];
	}
	printf("최소 공배수는 %d이다.", count * count_2);
}