#include <stdio.h>

int main(void) {
	int n[5];//고유번호 처음 5자리
	int sum = 0; //n[1]~n[5]까지의 숫자 제곱의 합
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		sum += (n[i] * n[i]);
	}
	printf("%d", sum % 10);
	
	return 0;
}