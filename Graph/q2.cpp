#include <iostream>
#include <queue>

using namespace std;

void BFS(int adjacencyMatrix[][5], int vertices, int startVertex) {
    bool visited[5] = {false};
    queue<int> q;

    visited[startVertex] = true;
    q.push(startVertex);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 0; i < vertices; i++) {
            if (adjacencyMatrix[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int vertices = 5;
    int adjacencyMatrix[][5] = {{0,1,1,0,0}, {1,0,1,1,0}, {1,1,0,0,1}, {0,1,0,0,10}, {0,0,1,1,0}};

    int startVertex = 0;
    BFS(adjacencyMatrix, vertices, startVertex);

    return 0;
}