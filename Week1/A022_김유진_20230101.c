#include <stdio.h>

int main(void) {
	int N; // 지난달 통화 개수
	scanf("%d\n", &N);
	int t; // 통화 시간
	int y = 0; // 영식 요금
	int m = 0; // 민식 요금
	for (int i = 0; i < N; i++) {
		scanf("%d", &t);
		if (t < 30) y += 10;
		else y += (t/30+1)*10;
		if (t < 60) m += 15;
		else m += (t/60+1)*15;
	}
	char ch1 = 'Y';
	char ch2 = 'M';
	if (y == m) printf("%c %c %d\n", ch1, ch2, y);
	if (y < m) printf("%c %d\n", ch1, y);
	if (m < y) printf("%c %d\n", ch2, m);
	
	return 0;
}