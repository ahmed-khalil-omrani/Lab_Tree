//
// Created by ASUS on 18/05/2024.
//
#include "Ex 1.h"

node *create()
{
    return NULL;
}
void addnoderec(node **tree,int x)
{
    node *elem;
    elem=(node *)malloc(sizeof(node));
    elem->key=x;
    elem->right=NULL;
    elem->left=NULL;
    if(*tree)
    {
        if(x>(*tree)->key)
        {
            if((*tree)->right)
            addnoderec(&((*tree)->right),x);
            else
            {
                (*tree)->right=elem;
                return;
            }
        }
        else{
            if((*tree)->left)
                addnoderec(&((*tree)->left),x);
            else
            {
                (*tree)->left=elem;
                return;
            }
        }
    }
    else
    {
        *tree=elem;
        return;
    }
}
void displayDGR(node *tree)
{
    if(!tree)
        return;
    displayDGR(tree->right);
    displayDGR(tree->left);
    printf("%d\t",tree->key);

}
void delete(node **tree)
{
    *tree=NULL;
}