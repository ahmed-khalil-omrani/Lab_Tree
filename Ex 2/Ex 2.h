//
// Created by ASUS on 20/05/2024.
//
#include <stdio.h>
#include<stdlib.h>
#ifndef EX_2_EX_2_H
#define EX_2_EX_2_H
typedef struct
{
    int key;
    struct node *right;
    struct node *left ;
}node;
node * create();
void add_node(node **, int);
int calcul(node *);
void display(node *);
#endif //EX_2_EX_2_H
