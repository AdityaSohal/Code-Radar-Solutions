#include <stdio.h>

void findRanks(int leaderboard[], int n, int scores[], int m) {
    int ranks[n];
    ranks[0] = 1; // The first player always has rank 1
    
    // Assign ranks to leaderboard scores
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1]) {
            ranks[i] = ranks[i - 1]; // Same score, same rank
        } else {
            ranks[i] = ranks[i - 1] + 1; // Increment rank for a new score
        }
    }
    
    int index = n - 1; // Start from the lowest rank
    
    // Find rank for each player's score
    for (int i = 0; i < m; i++) {
        // Move up the leaderboard until we find a score that is greater than the player's score
        while (index >= 0 && scores[i] >= leaderboard[index]) {
            index--;
        }
        // If index is -1, it means the player's score is higher than all leaderboard scores
        // Hence, they get rank 1. Otherwise, they get the rank of the next lower score.
        printf("Score: %d, Rank: %d\n", scores[i], index == -1 ? 1 : ranks[index] + 1);
    }
}