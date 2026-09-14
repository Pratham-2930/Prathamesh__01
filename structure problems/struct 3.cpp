#include <stdio.h>

struct Player
{
    char name[50];
    int matches;
    int runs;
    int wickets;
};

void acceptPlayers(struct Player p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Matches played: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayPlayers(struct Player p[], int n)
{
    int i;

    printf("\n--- Player Information ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name    : %s\n", p[i].name);
        printf("Matches : %d\n", p[i].matches);
        printf("Runs    : %d\n", p[i].runs);
        printf("Wickets : %d\n", p[i].wickets);
    }
}

void maximumRuns(struct Player p[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (p[i].runs > p[max].runs)
        {
            max = i;
        }
    }

    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name    : %s\n", p[max].name);
    printf("Runs    : %d\n", p[max].runs);
    printf("Matches : %d\n", p[max].matches);
    printf("Wickets : %d\n", p[max].wickets);
}

void maximumWickets(struct Player p[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (p[i].wickets > p[max].wickets)
        {
            max = i;
        }
    }

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name    : %s\n", p[max].name);
    printf("Wickets : %d\n", p[max].wickets);
    printf("Matches : %d\n", p[max].matches);
    printf("Runs    : %d\n", p[max].runs);
}

int main()
{
    struct Player p[10];

    acceptPlayers(p, 10);
    displayPlayers(p, 10);
    maximumRuns(p, 10);
    maximumWickets(p, 10);

    return 0;
}