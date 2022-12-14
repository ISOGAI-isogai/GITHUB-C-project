#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    void menu (void);
    void game (void);
    int input = 0;
    srand((unsigned int)time(NULL));
    
    do
    {
        menu ();
        printf("make a decision:");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                game ();
                break;
            case 0:
                printf("existing..\n");
                break;
            default:
                printf("please input again:\n");
                break;
        }
    }while (input);
    return 0;
}

void game (void)
{
    int guess = 0;
    printf("guess a number(1-100):");
    int num = rand ()%100+1; 
    while (1)
    {
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("too small\n");
            printf("input a number again:");
        }
        else if (guess > num)
        {
            printf("too large\n");
            printf("input a number again:");
        }
        else
        {
            printf("congratulation!\n");
            break;
        }
    }
}

void menu (void)
{
    printf("                     \n");
    printf("#####################\n");
    printf("#####################\n");
    printf("####1.start##########\n");
    printf("####0.exit###########\n");
    printf("#####################\n");
    printf("#####################\n");
}
