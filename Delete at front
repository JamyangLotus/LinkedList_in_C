#include <stdio.h>
#include <stdlib.h>

void delete_at_front(node **header)
{
  node *temp;
  if(*header == NULL)
  {
    printf("List is empty\n");
  }
  else
  {
    temp = *header;
    *header = (*header)->link;
    free(temp);
  }
}
