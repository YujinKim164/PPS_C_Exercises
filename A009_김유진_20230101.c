#include <stdio.h>

int main() {
	int C = 0; 
	scanf("%d", &C);
	int N = 0;
	for (int i = 0; i < C; i++) {
		int score[1000], sum = 0;
		double avg = 0.0;
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
		 	sum += score[j];
		}
		avg = (double)sum / N;
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (score[j] > avg) 
				count++; 
		}
		printf("%.3lf%%\n", ((double)count / N) * 100);
	}
	
	return 0;
}