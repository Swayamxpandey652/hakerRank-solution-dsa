The initial linked list is . Insert  at the position  which currently has  in it. The updated linked list is .
***************************************************************************************

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode  = new SinglyLinkedListNode(data);
    if(position == 1){
        newNode->next = llist;
    }
    SinglyLinkedListNode* current = llist;
    for(int i = 0;i<=position-2 && current!=NULL;i++){
        current=current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    return llist;
}
