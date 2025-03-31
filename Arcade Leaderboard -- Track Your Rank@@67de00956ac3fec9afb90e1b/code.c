// Your code here...
#include <stdio.h>

void findRanks(int leaderboard[], int n, int scores[], int m) {
    int ranks[n];
    ranks[0] = 1;
    
    // Assign ranks to leaderboard scores
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1;
        }
    }
    
    int index = n - 1; // Start from the lowest rank
    
    // Find rank for each player's score
    for (int i = 0; i < m; i++) {
        while (index >= 0 && scores[i] >= leaderboard[index]) {
            index--;
        }
        printf("%d\n", index == -1 ? 1 : ranks[index] + 1);
    }
}
