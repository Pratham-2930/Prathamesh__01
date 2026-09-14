#include <stdio.h>

struct Product
{
    char name[50];
    float price;
    int quantity;
};

void acceptProduct(struct Product *p)
{
    printf("\nEnter product name: ");
    scanf(" %[^\n]", p->name);

    printf("Enter price: ");
    scanf("%f", &p->price);

    printf("Enter quantity: ");
    scanf("%d", &p->quantity);
}

void displayProduct(struct Product p)
{
    printf("%-15s %.2f     %d     %.2f\n",
           p.name,
           p.price,
           p.quantity,
           p.price * p.quantity);
}

int main()
{
    struct Product cart[50];
    int n, i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        acceptProduct(&cart[i]);
    }

    printf("\n----------- BILL -----------\n");
    printf("Product         Price    Qty    Amount\n");

    for (i = 0; i < n; i++)
    {
        displayProduct(cart[i]);
        total = total + (cart[i].price * cart[i].quantity);
    }

    printf("\nTotal Cost = %.2f\n", total);

    return 0;
}