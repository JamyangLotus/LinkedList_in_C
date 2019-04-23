void delete_at_pos(node **header,int pos)
{
    node *temp,*todelete;
    int i;
    temp = *header;
    todelete = *header;
    if(*header == NULL)
    {
        printf("Nothing to delete\n");
    }
    if(pos == 1)
    {
        *header = (*header)->link;
        free(todelete);
    }
    for(i=1;i<=pos-1;i++)
    {
        temp = todelete;
        todelete = todelete->link;

        if(todelete == NULL)
            break;
    }
    if(todelete!=NULL)
    {
        temp->link = todelete->link;
        free(todelete);
    }

}
