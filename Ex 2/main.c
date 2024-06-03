#include "Ex 2.h"

int main() {
    int x,i,n;
    node *tree;
    tree=create();
    printf("give the number of element of tree");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give the element");
        scanf("%d",&x);
        add_node(&tree,x);
    }
    display(tree);
    x=calcul(tree);
    printf("\n tree has %d nodes",x);
}
