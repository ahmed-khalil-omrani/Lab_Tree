//
// Created by ASUS on 03/06/2024.
//

#include "Ex 5.h"
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
void displayDRG(node *tree)
{
    if(!tree)
        return;
    displayDRG(tree->right);
    printf("%d\t",tree->key);
    displayDRG(tree->left);


}