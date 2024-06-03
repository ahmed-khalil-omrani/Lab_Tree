//
// Created by ASUS on 20/05/2024.
//

#include "Ex 2.h"
node *create()
{
    return NULL;
}
void add_node(node **tree,int x)
{
    node *elem;
    elem=(node *)malloc(sizeof(node));
    elem->key=x;
    elem->right=NULL;
    elem->left=NULL;
    if(*tree)
    {
        if(x>(*tree)->right)
        {
            if((*tree)->right)
                add_node(&((*tree)->right),x);
            else
            { (*tree)->right=elem;
            return;
            }
        }
        else
        {
            if((*tree)->left)
                add_node(&((*tree)->left),x);
            else
            {
                (*tree)->left=elem;
                return;
            }
        }
    }
    else
    {*tree=elem;
        return;}
}
void display(node *tree)
{
    if(!tree)
        return;
    printf("%d",tree->key);
    display(tree->right);
    display(tree->left);

}
int calcul(node *tree)
{
    if (!tree)
        return 0;
    return 1+calcul(tree->right)+calcul(tree->left);


}