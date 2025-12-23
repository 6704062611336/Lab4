#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    for (i=1;i<=num;i++) {
         int score;
    scanf("%d", &score);

    if (score >= 68) {
        if (score >= 80) {
            printf("%d(A)\n",score);
        } else {
            if (score >= 70) {
                printf("%d(B)\n",score);
            } else {
                printf("%d(C)\n",score);
            }
        }
    } else {
        if (score >= 60) {
            printf("%d(D)\n",score);
        } else {
            printf("%d(F)\n",score);
        }
    }
    }
   
}
