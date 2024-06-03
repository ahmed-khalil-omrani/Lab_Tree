#include "Ex 5.h"
int main() {
    node *tree;
    int x,n,i;
    tree=create();
    printf("give the number of nodes to insert");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give the value");
        scanf("%d",&x);
        addnoderec(&tree,x);
    }
    displayDRG(tree);



}
