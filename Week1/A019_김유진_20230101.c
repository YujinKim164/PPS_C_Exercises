#include <stdio.h>

int main(void) {
  int a, b, c; // 세 개의 자연수 A, B, C
	int count[10]={0}; // 각 자리 숫자의 개수

  scanf("%d %d %d", &a, &b, &c);
	int result = a * b * c;

	while (result > 0) {
		count[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	
  return 0;
}