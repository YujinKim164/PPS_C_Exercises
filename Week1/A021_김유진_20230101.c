#include <stdio.h>

int main(void) {
	int N; // 멀티탭의 개수
	scanf("%d\n", &N);
	int result = 0;
	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%d", &temp);
		result += temp;
	}

	printf("%d\n", result - N +1);
	return 0;
}