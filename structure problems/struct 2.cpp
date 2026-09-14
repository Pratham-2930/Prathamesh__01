#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

void accept(struct Time *t)
{
    printf("Enter hours: ");
    scanf("%d", &t->hrs);

    printf("Enter minutes: ");
    scanf("%d", &t->min);

    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}

void display(struct Time t)
{
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time result;

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min;
    result.hrs = t1.hrs + t2.hrs;

    if (result.sec >= 60)
    {
        result.sec = result.sec - 60;
        result.min++;
    }

    if (result.min >= 60)
    {
        result.min = result.min - 60;
        result.hrs++;
    }

    return result;
}

int toSeconds(struct Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

int main()
{
    struct Time t1, t2, result;

    printf("Enter first time:\n");
    accept(&t1);

    printf("\nEnter second time:\n");
    accept(&t2);

    result = addTime(t1, t2);

    printf("\nFirst Time  : ");
    display(t1);

    printf("Second Time : ");
    display(t2);

    printf("Added Time  : ");
    display(result);

    printf("\nFirst time in seconds  = %d\n", toSeconds(t1));
    printf("Second time in seconds = %d\n", toSeconds(t2));

    return 0;
}