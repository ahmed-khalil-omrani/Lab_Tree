#include "Ex 3.h"

int main() {
    node *tree;
    int x, n, i;
    tree = create();
    printf("give the number of nodes");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("give the element");
        scanf("%d", &x);
        add_node(&tree, x);
    }
    display(tree);
    printf("give the element to search");
    scanf("%d", &x);
    if (search(tree, x))
        printf("exist");
    else
        printf("doesn't exist");
}
