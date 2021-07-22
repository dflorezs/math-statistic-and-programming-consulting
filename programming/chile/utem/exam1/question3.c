void delete_even(Node *head){
    Node *n1 = head;
    Node *n2 = head->next;
    if(n2 != n1){
        while(1){
            if(n2->next = n2){
                n1->next = n1;
                free(n2);
                break;
            }
            n1->next = n2->next;
            free(n2);
            n1 = n1->next;
            if(n1->next == n1)
                break;
            n2 = n1->next;
        }
    }
} 