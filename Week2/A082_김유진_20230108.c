#include <stdio.h>
#include <stdlib.h>

struct info{	//정보가 있는 구조체
	int age;
	char name[101];
};

int compare(const void* arg1, const void* arg2) {	//정렬
	info *a = (info*)arg1;    //void를 int형으로 변환
	info *b = (info*)arg2;
	//오름차순 정렬
	if (a->age > b->age) return 1;
	else if (a->age < b->age) return -1;
	else return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	info* p_info = (info*)malloc(sizeof(info) * n);

	for (int i = 0; i < n; i++) {	//입력
		scanf("%d%*c%s", &p_info[i].age, p_info[i].name);
	}
	qsort(p_info, n, sizeof(info), compare);	//나이 순 정렬

	for (int i = 0; i < n; i++) {	//출력
		printf("%d %s\n", p_info[i].age, p_info[i].name);
	}
	free(p_info);	//할당 해제
	return 0;
}