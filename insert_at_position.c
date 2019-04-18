#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void insert_at_position(node **header,int pos,int data)
{
  node *newp = (node *)malloc(sizeof(node));
  node *temp = *header;
  if(pos == 1)
  {
    newp->link = *header;
    newp->data = data;
    *header = newp;
  }
  else
  {
    for(i=1;i<pos-1;i++)
    {
      temp = temp->link;
      
      if(temp == NULL)
        break;
    }
    if(temp!=NULL)
    {
      newp->link = temp->link;
      newp->data = data;
      temp->link = newp;
    }
 }
     
    
  
