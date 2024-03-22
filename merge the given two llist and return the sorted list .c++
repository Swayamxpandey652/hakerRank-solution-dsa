Given pointers to the heads of two sorted linked lists, merge them into a single, sorted linked list. Either head pointer may be null meaning that the corresponding list is empty.
**************************************************************************************************

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* dummy = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* tail =dummy;
    
    while(head1 && head2){
        if( head1->data <= head2->data){
            tail->next = head1;
            head1 = head1->next;
        }else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    
    if(head1){
        tail->next = head1;
    }else{
        tail->next = head2;
    }
    SinglyLinkedListNode* head = dummy->next;
    delete dummy;
    
    return head;
} 
