void reverse(node **header)
{
    node *prev,*head,*cur;
    prev = *header;
    head = head->link;
    cur = head;
    prev->link = NULL;
    while(head!=NULL)
    {
        head = head->link;
        cur->link = prev;
        prev = cur;
        cur = head;
    }
    *header = prev;
}
