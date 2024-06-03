//
// Created by ASUS on 18/05/2024.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef EX_1_EX_1_H
#define EX_1_EX_1_H
typedef struct
{
    int key;
    struct node *right;
    struct node *left;
}node;
node *create();
void addnoderec(node **,int);
void displayDGR(node *);
void delete(node **);
#endif //EX_1_EX_1_H
