#include "Ex 4.h"


int main() {
    node *tree;
    int x;
    tree=create();
    addrec(&tree,5);
    addrec(&tree,3);
    addrec(&tree,7);
    addrec(&tree,2);
    addrec(&tree,4);
    addrec(&tree,6);
    addrec(&tree,9);
    displayDGR(tree);
    x=numb_node(tree);
    printf("\n%d",x);
   /*x=hight(tree);
    printf("\n%d",x);*/
    x=numb_leav(tree);
    printf("\n%d",x);
    printf("\n%d",isSBT(tree));
    delete(&tree);
    displayDGR(tree);
    printf("cc\n");
    deletenode(tree,7);
    displayDGR(tree);
}
