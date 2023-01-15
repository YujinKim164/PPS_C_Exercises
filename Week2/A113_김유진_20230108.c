#include <stdio.h>

int n, arr[1001][1001], visit[1001];

void DFS(int start) {
	visit[start]=1;
	int i;
	for(i=1; i<=n; i++)
		if(arr[start][i] && !visit[i]) DFS(i);
}
int main() {
	int m, i, j, cnt=0;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) { // 입력받기
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b]=arr[b][a]=1;
	}
	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++)
			if(arr[i][j] && !visit[j]) {
				DFS(j);
				cnt++;
			}
	for(i=1; i<=n; i++) 
        if(!visit[i]) cnt++;

	printf("%d", cnt);
	return 0;
}