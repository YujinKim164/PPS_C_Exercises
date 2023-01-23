#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> v;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(),v.rend());

    int days=0;

    for(int i=0;i<N;i++) 
        days=max(days,v[i]+i+1); //묘목을 구입한 날이 1일 따라서 +1
    
    cout << days+1; // 마지막 나무가 다 자란 다음날 이장님 초대 가능 따라서 +1
}