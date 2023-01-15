#include <stdio.h>
 
 
int main() {
 
    int h[10000];
    int n, l;
    scanf("%d %d", &n, &l);
    int tmp;
                
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
 
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n - 1; k++) {
            if (h[k] > h[k + 1]) {            // 연달아있는 두수중 앞에 있는수가 크다면
                tmp = h[k];                    // 위치 변경
                h[k] = h[k + 1];
                h[k + 1] = tmp;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (h[i] <= l)        // 입력한 값이 뱀의 길이보다 작다면
            l += 1;            // 뱀의길이에 1을 추가한다.
    }
    printf("%d", l);
 
}