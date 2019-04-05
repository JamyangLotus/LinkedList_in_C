#include <stdio.h>
#include <stdlib.h>
#include "node.h" 

void insert_at_front(node **header,int data)
{
    node *newnode = (node *)malloc(sizeof(node));  //Allocating memory for a new node from the heap.
    newnode->link = *header;  //Setting the newnode link field to the address pointed to by header.
    newnode->data = data;
    *header = newnode;
}
   
