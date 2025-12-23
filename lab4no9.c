#include <stdio.h>

int main() {
    while (1) {
        int score;
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score >= 87) {
            printf("%d(A)\n", score);
        } else if (score >= 79) {
            printf("%d(B)\n", score);
        } else if (score >= 71) {
            printf("%d(C)\n", score);
        } else if (score >= 63) {
            printf("%d(D)\n", score);
        } else {
            printf("%d(F)\n", score);
        }
    }

    return 0;
}

