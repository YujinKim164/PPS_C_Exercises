#include <stdio.h>

int main() {
	int n[8] = {1,2,3,4,5,6,7,8};
	int p = 0, q = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", n[i]);
		if (p > q && n[p] > n[q]) printf("ascending");
		else printf("descending");
	}
	return 0;
}
