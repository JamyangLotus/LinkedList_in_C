void print(node *header)
{
    if(header == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(header!=NULL)
        {
            printf("%d->",header->data);
            header = header->link;
        }
        printf("END\n");
    }
    
}
