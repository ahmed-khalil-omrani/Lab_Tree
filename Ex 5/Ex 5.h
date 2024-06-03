//
// Created by ASUS on 03/06/2024.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef EX_5_EX_5_H
#define EX_5_EX_5_H
typedef struct
{
    int key;
    struct node *right;
    struct node *left;
}node;
node *create();
void addnoderec(node **,int);
void displayDRG(node *);
#endif //EX_5_EX_5_H
