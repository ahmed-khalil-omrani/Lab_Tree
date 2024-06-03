//
// Created by ASUS on 27/05/2024.
//
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#ifndef EX_4_EX_4_H
#define EX_4_EX_4_H
typedef struct
{
    int value ;
    struct node *right;
    struct node *left;
}node ;
node *create();
void addnode(node **,int);
void displayDGR(node *);
void addrec(node **,int);
int numb_node(node *);
int hight(node *);
int numb_leav(node *);
int max(int ,int);
bool comp(node *,node *);
bool isSBT(node *);
void deletenode(node *,int);
void delete(node **);
#endif //EX_4_EX_4_H
