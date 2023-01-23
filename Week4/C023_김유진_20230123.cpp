#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
char buffer[501][501];
int blind[5];
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    for (auto y=0; y< 5*m + 1 ; y++){
        for (auto x=0; x< 5*n+1; x++){
            cin >> buffer[x][y];
        }
    }
    for (auto y=0; y<m; y++){
        for (auto x=0; x<n; x++) {
            int startX = x * 5 + 1;
            int startY = y * 5 + 1;
            int type = 0;
            for (auto i=0; i<4; i++){

//                cout  << startX << ' ' << startY+i << ' ' << buffer[startX][startY+i] << '\n';
                if (buffer[startX][startY+i] == '*'){
                    type++;
                }
            }
            blind[type]++;

        }
    }
    for (auto i=0; i<5; i++){
        cout << blind[i]<< ' ';
    }

}