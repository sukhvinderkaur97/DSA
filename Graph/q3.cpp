// Program to implement Depth First Search

#include <iostream>
#include <stack>

using namespace std;

void DFS(int adjacencyMatrix[][5], int vertices, int startVertex) {
    bool visited[5] = {false};
    stack<int> s;

    s.push(startVertex);

    cout << "DFS Traversal: ";
    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            cout << current << " ";
            visited[current] = true;
        }

        for (int i = vertices - 1; i >= 0; i--) {
            if (adjacencyMatrix[current][i] == 1 && !visited[i]) {
                s.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int vertices = 5;
    int adjacencyMatrix[][5] = {{0,1,1,0,0}, {1,0,1,1,0}, {1,1,0,0,1}, {0,1,0,0,1}, {0,0,1,1,0}};

    int startVertex = 0;
    DFS(adjacencyMatrix, vertices, startVertex);

    return 0;
}
