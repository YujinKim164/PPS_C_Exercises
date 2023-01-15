#include <stdio.h>

int main() {

    int input_size, tmp; // 입력할 수의 길이와 임시 변수 선언
    int arr[1000] = { 0, }; // 모두 0으로 채워진 길이 1000의 배열 선언

    scanf("%d", &input_size);

	for (int i = 0; i < input_size; i++)	{
		scanf("%d", &tmp);
		arr[tmp]++; // 입력한 수의 인덱스마다 ++
	}

	for (int j = 0; j < 1000; j++)	{
		if (arr[j] != 0) // 0이 아닌 모든 인덱스를 출력
			printf("%d ", j);
	}
    printf("\n");

	return 0;
}