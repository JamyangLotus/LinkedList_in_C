void delete_at_end(node *header)
{
    node *temp,*todelete;
    temp = header;
    todelete = header;
    while(todelete->link!=NULL)
    {
        temp = todelete;
        todelete = todelete->link;
    }
    temp->link = NULL;
    free(todelete);
}
