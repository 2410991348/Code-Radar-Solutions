#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Generate the dense ranking of the leaderboard
    int dense_rank[200000];
    int current_rank = 1;
    dense_rank[0] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            dense_rank[i] = ranked[i];
            current_rank++;
        } else {
            dense_rank[i] = dense_rank[i - 1];
        }
    }

    // Now calculate the rank for each player's game score
    int i = n - 1; // Start from the last rank
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= ranked[i]) {
            i--;
        }
        result[j] = i + 2; // Since i + 1 is the rank for the last valid score in the leaderboard
    }
}

int main() {
    int n, m;

    scanf("%d", &n);

    int ranked[200000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    scanf("%d", &m);

    int player[200000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    int result[200000];

    // Call the function to track player's ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Output the rank after each game
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}