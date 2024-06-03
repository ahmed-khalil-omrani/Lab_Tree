//
// Created by ASUS on 27/05/2024.
//

#include "Ex 4.h"
node *create()
{
    return NULL;
}
void addnode(node **tree, int x)
{
    node *tmptree,*tmpnode,*elem;
    elem=(node *)malloc(sizeof(node ));
    elem->value=x;
    elem->right=NULL;
    elem->left=NULL;
    tmptree=*tree;
    if(*tree)
    {

        do
        {
            tmpnode=tmptree;
            if(x>tmptree->value)
            {
                tmptree=tmptree->right;
                if(!tmptree)
                {
                    tmpnode->right=elem;
                }
            }
            else
            {
                tmptree=tmptree->left;
                if(!tmptree)
                {
                    tmpnode->left=elem;
                }
            }
        }while(tmptree);
    }
    else
        *tree=elem;

}
void displayDGR(node *tree)
{
    if( !tree)
        return;
    displayDGR(tree->right);
    displayDGR(tree->left);
    printf("%d\n+",tree->value);
}
void addrec(node **tree,int x)
{
    node *elem;
    elem=(node *)malloc(sizeof(node));
    elem->value=x;
    elem->right=NULL;
    elem->left=NULL;
    if(*tree)
    {
        if(x>(*tree)->value)
        {
            if((*tree)->right)
            {
                addrec(&((*tree)->right),x);
            }
        else
        {
            (*tree)->right=elem;
            return;
        }
        }
        else
        {
            if((*tree)->left)
            {
                addrec(&(*tree)->left,x);

            }
            else
            {
                (*tree)->left=elem;
                return;
            }
        }
    }
    else
        *tree=elem;
}
int numb_node(node *tree)
{
    if (!tree)
        return 0;
    return numb_node(tree->right)+numb_node(tree->left)+1;
}
int hgiht(node *tree)
{
    if(!tree)
        return -1;
    return max(hgiht(tree->right),hgiht(tree->left))+1;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int numb_leav(node *tree)
{
    if(!tree)
        return 0;
    if(tree->right==NULL && tree->left==NULL)
            return 1;
        return numb_leav(tree->right)+numb_leav(tree->right);
}
bool comp(node *tree ,node *tree2)
{
    return tree->value>tree2->value;
}
bool isSBT(node *tree)
{
    if (tree->left==NULL && tree->right==NULL)
        return true;
    else if(!comp(tree->right,tree->left)||!isSBT(tree->right)||!isSBT(tree->right))
        return false;
    else
        return true;

}
void delete(node **tree)
{
    if(*tree)
    {
    delete((*tree)->right);
    delete((*tree)->right);
    tree=NULL;}


}
void deletenode(node *tree,int x)
{
   node *tmp;
    if(!tree)
        return;
    if(x>tree->value)
        deletenode(tree->right,x);
    else if(x<tree->value)
        deletenode(tree->left,x);
    else
    {
        if(tree->right=NULL && tree->left==NULL)
            tree=NULL;
        else if(tree->right!=NULL && tree->left==NULL)
            tree=tree->right;
        else if(tree->right==NULL && tree->left!=NULL)
            tree=tree->left;
        else {
            tmp=tree->right;
            tree = tree->left;
            tree->right=tmp;
        }


    }
}