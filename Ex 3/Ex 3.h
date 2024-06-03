//
// Created by ASUS on 21/05/2024.
//
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#ifndef EX_3_EX_3_H
#define EX_3_EX_3_H
typedef struct
{
    int key;
    struct nnode *right;
    struct node *left;
}node;
node *create();
void add_node(node **,int);
void display(node *);
bool search(node *,int);
#endif //EX_3_EX_3_H
