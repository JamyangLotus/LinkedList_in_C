node *merge(node *header1,node *header2)
{
    node *header3,*temp;
    temp = header1;
    while(header1->link!=NULL)
    {
        header1 = header1->link;
    }
    header1->link = header2;
    header3 = temp;
    return header3;
}
