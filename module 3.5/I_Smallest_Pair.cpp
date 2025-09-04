#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int minValue = INT_MAX;
        int minAiMinusI = A[0] - 0;

        for (int j = 1; j < N; j++) {
            int current = A[j] + j + minAiMinusI;
            minValue = min(minValue, current);
            minAiMinusI = min(minAiMinusI, A[j] - j);
        }

        cout << minValue << endl;
    }
    return 0;
}
