#include <iostream>
#include <vector>
#include <queue>

 
using namespace std;
 
// 0번 인덱스는 버린다. 
int node_parent[MAX_SIZE] = { 0 };
vector<int> connected_node[MAX_SIZE];
int total_node;
 
void bfs() {
    queue<pair<int, int>> bfs_queue;
    // 1번 노드를 부모로 하여 자식을 queue 에 밀어 넣는다. 
    for (int i = 0; i < connected_node[1].size(); i++) {
        bfs_queue.push({ 1, connected_node[1].at(i) });
    }
 
    while (bfs_queue.size()) {
        pair<int, int> sub_connect = bfs_queue.front();
        bfs_queue.pop();
 
        // 부모 표시
        node_parent[sub_connect.second] = sub_connect.first;
 
        // first 와 관련있는 노드를 queue에 밀어 넣는다. 
        for (int i = 0; i < connected_node[sub_connect.second].size(); i++) {
            if (node_parent[connected_node[sub_connect.second].at(i)] == 0) {
                bfs_queue.push({ sub_connect.second, connected_node[sub_connect.second].at(i) });
            }
        }
    } 
}
 
int main() {
    cin >> total_node;
    
    for (int i = 0; i < total_node - 1; i++) {
        int sub_node_1, sub_node_2;
        scanf("%d %d", &sub_node_1, &sub_node_2);
        // 연결된 노드에 모두 연결 
        connected_node[sub_node_1].push_back(sub_node_2);
        connected_node[sub_node_2].push_back(sub_node_1);
    }
 
    node_parent[1] = -1;
    bfs();
     
    for (int i = 2; i <= total_node; i++) {
        printf("%d\n", node_parent[i]);
    }
 
    return 0;
}
