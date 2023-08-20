#include <iostream>
#include <cmath>
using namespace std;
int findMaxTriangleHeight(int N) {
    int h = sqrt(2 * N);
    while ((h * (h + 1) * (h + 2)) / 6 > N) {
        h--;
    }
    return h;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        int max_height = findMaxTriangleHeight(N);
        cout << max_height << endl;
    }
    return 0;
}
