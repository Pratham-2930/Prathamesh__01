#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

void addMovie(struct Movie m[], int *n)
{
    printf("\nEnter movie title: ");
    scanf(" %[^\n]", m[*n].title);

    printf("Enter director: ");
    scanf(" %[^\n]", m[*n].director);

    printf("Enter release year: ");
    scanf("%d", &m[*n].year);

    printf("Enter genre: ");
    scanf(" %[^\n]", m[*n].genre);

    (*n)++;

    printf("\nMovie added successfully!\n");
}

void displayMovies(struct Movie m[], int n)
{
    int i;

    if (n == 0)
    {
        printf("\nNo movies available.\n");
        return;
    }

    printf("\n--- Movie Database ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nMovie %d\n", i + 1);
        printf("Title    : %s\n", m[i].title);
        printf("Director : %s\n", m[i].director);
        printf("Year     : %d\n", m[i].year);
        printf("Genre    : %s\n", m[i].genre);
    }
}

void searchMovie(struct Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    printf("\nEnter movie title to search: ");
    scanf(" %[^\n]", title);

    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found!\n");
            printf("Title    : %s\n", m[i].title);
            printf("Director : %s\n", m[i].director);
            printf("Year     : %d\n", m[i].year);
            printf("Genre    : %s\n", m[i].genre);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nMovie not found.\n");
    }
}

void updateMovie(struct Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    printf("\nEnter movie title to update: ");
    scanf(" %[^\n]", title);

    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("Enter new director: ");
            scanf(" %[^\n]", m[i].director);

            printf("Enter new release year: ");
            scanf("%d", &m[i].year);

            printf("Enter new genre: ");
            scanf(" %[^\n]", m[i].genre);

            printf("\nMovie updated successfully!\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nMovie not found.\n");
    }
}

int main()
{
    struct Movie movies[100];
    int n = 0;
    int choice;

    do
    {
        printf("\n\n===== MOVIE DATABASE =====\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addMovie(movies, &n);
                break;

            case 2:
                displayMovies(movies, n);
                break;

            case 3:
                searchMovie(movies, n);
                break;

            case 4:
                updateMovie(movies, n);
                break;

            case 5:
                printf("\nProgram ended.\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}