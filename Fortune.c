#include <stdio.h>
#include <cs50.h>
int main()
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
    ask_again5:
    printf (" Welcome to Number Fortune Teller. Choose a number from 1 - 4:");
    scanf ("%d!/n", &a);
    getchar();
    if (a == 4)
        {
            ask_again1:
            printf (" Choose a number from 5 - 8:");
            scanf ("%d!/n", &b);
            getchar();
                if (b == 5)
                    printf ("If you think you can sum up your life in one line of code you're crazy.");
                else if (b == 6)
                    printf ("I see money in your future... It's not yours though.");
                else if (b == 7)
                    printf ("Three can keep a secret. If you get rid of two, that is.");
                else if (b == 8)
                    printf ("Your efforts have not gone unnoticed.");
                else
                {
                    printf ("Character not recognized. Try again.");
                    goto ask_again1;
                }
        }

    else if (a == 3)
        {
            ask_again2:
            printf (" Choose a number from 5 - 8:");
            scanf ("%d!/n", &c);
            getchar();
                if (c == 5)
                    printf ("Good");
                else if (c == 6)
                    printf ("You don't have to be faster than the bear, you just have to be faster than the slowest guy running away from it.");
                else if (c == 7)
                    printf ("Enjoy yourself while you can.");
                else if (c == 8)
                    printf ("You are not illiterate.");
                else
                {
                    printf ("Character not recognized. Try again.");
                    goto ask_again2;
                }
        }

    else if (a == 2)
        {
            ask_again3:
            printf (" Choose a number from 5 - 8:");
            scanf ("%d!/n", &d);
            getchar();
                if (d == 5)
                    printf ("Someone is looking up to you. Don't let that person down.");
                else if (d == 6)
                    printf ("Run.");
                else if (d == 7)
                    printf ("No snowflake in an avalanche ever feels responsible.");
                else if (d == 8)
                    printf ("If you eat something and no one sees you eat it, it has no calories.");
                else
                {
                    printf ("Character not recognized. Try again.");
                    goto ask_again3;
                }
        }

    else if (a == 1)
        {
            ask_again4:
            printf (" Choose a number from 5 - 8:");
            scanf ("%d!/n", &e);
            getchar();
                if (e == 5)
                    printf ("Your heart will skip a beat");
                else if (e == 6)
                    printf ("Don't be afraid to take that big step");
                else if (e == 7)
                    printf ("Perhaps you've been focusing too much on saving.");
                else if (e == 8)
                    printf ("Perhaps you've been focusing too much on spending.");
                else
                {
                    printf ("Character not recognized. Try again.");
                    goto ask_again4;
                }
        }

    else
    {
        printf ("Character not recognized. Try again.");
        goto ask_again5;
    }

    return 0;
}
