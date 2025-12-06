#include <stdio.h>

float calculate_win_odds(int outs);

int main() {
    int card_outs;
    float win_probability;

    printf("Enter integer card: ");
    scanf("%d", &card_outs);

    win_probability = calculate_win_odds(card_outs);

    printf("POKER PROBABILITY REPORT (2 Cards Remaining)\n");
    printf("Calcalated Outs: %d\n", card_outs);
    printf("Win Probability (Odds x 4): %.2f%%\n", win_probability);

    printf("Assessment: ");
    if (win_probability >= 30) {
        printf("HIGH Win Probability");
    } else if (win_probability < 30) {
        printf("LOW Win Probability");
    }

    return 0;
}

float calculate_win_odds(int outs) {
    outs = outs * 4;
    return outs;
}