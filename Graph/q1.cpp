#include <iostream>
#include <unordered_map>
using namespace std;

#define N 4 // Number of cities

bool isConnected(int adjMatrix[N][N], int city1, int city2) {
    return adjMatrix[city1][city2] == 1;
}

int main() {
    unordered_map<string, int> cityIndex = {
        {"Delhi", 0}, {"Jaipur", 1}, {"Mumbai", 2}, {"Chennai", 3}
    };

    int adjMatrix[N][N] = { {0, 1, 0, 1},  // Delhi (0) → Jaipur (1), Chennai (3)
                            {1, 0, 1, 0},  // Jaipur (1) → Delhi (0), Mumbai (2)
                            {0, 1, 0, 1},  // Mumbai (2) → Jaipur (1), Chennai (3)
                            {1, 0, 1, 0} };// Chennai (3) → Delhi (0), Mumbai (2)

    string city1, city2;
    cout << "Enter two city names: ";
    cin >> city1 >> city2;

    if (cityIndex.find(city1) == cityIndex.end() || cityIndex.find(city2) == cityIndex.end()) {
        cout << "Invalid city names entered.\n";
        return 1;
    }

    if (isConnected(adjMatrix, cityIndex[city1], cityIndex[city2])) {
        cout << "True - There is a direct route from " << city1 << " to " << city2 << ".\n";
    } else {
        cout << "False - No direct route from " << city1 << " to " << city2 << ".\n";
    }

    return 0;
}
