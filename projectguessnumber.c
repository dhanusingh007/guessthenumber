#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int com, player,att=1;
    srand(time(0));
    com = rand() % 100;
    printf("");
    do
    {
        printf("\v\nEnter any number for guess (1-100)");
        scanf("%d", &player);
        if (player > com)
        {
            printf("guess a small number        was %d attempt",att);
        }
        else if (player < com)
        {
            printf("guess a large number        was %d attempt",att);
        }
        else
        {
            printf("congrates !     \n you guessed the number in %d attempts ",att);
        }
        att++;
    } while (com!=player /* condition */);

    return 0;
}
