#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void insert_at_end(node **header,int data)
{
  node *newnode,*temp;
  temp = *header;
  newnode = (node *)malloc(sizeof(node);
  while(temp->link!=NULL)
  {
    temp = temp->link;
  }
  newnode->link = NULL;
  newnode->data = data;
  temp->link = new;
}
  
