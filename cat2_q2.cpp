#include <stdio.h>

int main() {
    
    int scores[2][2] = {
        {85, 90},
        {78, 88}
    };


    printf("Scores:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}