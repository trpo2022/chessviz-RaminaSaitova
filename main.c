#include <stdio.h>

void out_doska(char doska[9][10])
{
    printf("\n");
    int x = 0, y = 0;
    for (y = 0; y < 9; y++) {
        for (x = 0; x < 10; x++) {
            printf("%c ", doska[y][x]);
            if (x == 0 || x == 8) {
                printf("| ");
            }
        }
        printf("\n");
        if (y == 7) {
            printf("- +- - - - - - - - -+ -\n");
        }
    }
}

int main()
{
    char doska[9][10]
            = {"8rnbqkbnr8",
               "7pppppppp7",
               "6        6",
               "5        5",
               "4        4",
               "3        3",
               "2PPPPPPPP2",
               "1RNBQKBNR1",
               " abcdefgh"};
    out_doska(doska);
    return 0;
}