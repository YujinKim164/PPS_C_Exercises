#include <iostream>
using namespace std;

int room[1000000];

int main() {
	int N;             // 버튼의 개수
	int count = 0;     // 버튼을 눌러야 되는 횟수

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> room[i];
	}

	//켜져있는 버튼을 찾아 모두 꺼야함
	for (int i = 0; i < N; i++) {
		if (room[i] == 1) {
			count++;	// 버튼을 눌려야 하는 횟수++

			// 오른쪽 1번째 버튼 눌림 
			if (room[i + 1] == 1) {
				room[i + 1] = 0;
			}
			else {
				room[i + 1] = 1;
			}
			// 오른쪽 2번째 버튼 눌림 
			if (room[i + 2] == 1) {
				room[i + 2] = 0;
			}
			else {
				room[i + 2] = 1;
			}
		}
	}

	cout << count;

	return 0;
}