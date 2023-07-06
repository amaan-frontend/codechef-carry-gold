#include <stdio.h>

void canCarryGold(int T, int testCases[][3]) {
    for (int i = 0; i < T; i++) {
        int N = testCases[i][0];
        int X = testCases[i][1];
        int Y = testCases[i][2];

        // Calculate the maximum gold capacity of Chef and friends
        int totalCapacity = (N + 1) * Y;

        // Check if the total capacity is greater than or equal to the gold in the mine
        if (totalCapacity >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    int testCases[T][3];
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &testCases[i][0], &testCases[i][1], &testCases[i][2]);
    }

    canCarryGold(T, testCases);

    return 0;
}
