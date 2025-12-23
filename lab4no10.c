#include <stdio.h>

int main() {
    int a=0,b=0,c=0,d=0,f=0;

    while (1) {
        int score;
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score >= 87) {
            printf("%d(A)\n", score);
            a++;
        } else if (score >= 79) {
            printf("%d(B)\n", score);
            b++;
        } else if (score >= 71) {
            printf("%d(C)\n", score);
            c++;
        } else if (score >= 60) {
            printf("%d(63)\n", score);
            d++;
        } else {
            printf("%d(F)\n", score);
            f++;
        }
    }

    printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)\n", a,b,c,d,f);
    return 0;
}

