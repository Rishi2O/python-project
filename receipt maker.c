#include <stdio.h>
struct item
{
    char food[100];
    char name[100];
};
int main()
{
    struct item f[100];
    int amount[100];
    int quntity[100];
    int a, b, d, total = 0, c;
    printf("number of food:");
    scanf("%d", &b);
    printf("Enter name:");
    scanf("%s", &f[d].name);

    for (a = 0; a < b; a++)
    {
        scanf("%d", &c);
        printf("Enter food name:");
        scanf("%s", &f[a].food);
        printf("price of food:");
        scanf("%d", &amount[a]);
        printf("enter quantity of food:");
        scanf("%d\n", &quntity[a]);
    }
    //printing of order
    printf(" __________________________________________________________ ");
    printf("|             Rishi food and drink restaurant              |");
    printf("|__________________________________________________________|");
    printf("|customer Name:%s\n", f[d].name);
    printf("|__________________________________________________________|");
    printf("| Qty          Name           Price            total       |\n");
    printf("|                                                          |");
    for (a = 0; a < b; a++)
    {
        printf("|-----------------------------------------------------------");
        printf("| %d            %s            %d               %d\n", quntity[a], f[a].food, amount[a], amount[a] * quntity[a]);
        
        total += amount[a] * quntity[a];
    }
    printf("|__________________________________________________________|");

    printf("|                                           |total:%d| ", total);
    printf("\n|__________________________________________________________|");
}
