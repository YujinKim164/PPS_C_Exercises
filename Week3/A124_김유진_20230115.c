#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++){
        if (N%1 == 0){
            printf("%d\n", i);
            N = N /i;
            i = 1;
        }
    }
}