void deleteNode(struct ListNode* node) {
    struct ListNode * p = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode * q = (struct ListNode*)malloc(sizeof(struct ListNode));
    p = list->head;
    q = p->next;
    if(p->val==node->val)
       {
           list->head = q;
           free(p);
       }
       else if(q->val == node->val)
       {
           p->next = q->next;
           free(q);
       }
    else
    {
    while(1)
    {
        p = p->next;
        q = q->next;
        if(q->val == node ->val)
        {
           p->next = q->next;
           free(q);
        }
    }
}
}
