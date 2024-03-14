Given a pointer to the head of a singly-linked list, print each  value from the reversed list. If the given list is empty, do not print anything.

Example
There are three test cases. There are no blank lines between test case output.

The first linked list has  elements: . Printing this in reverse order produces:
5
2
4
12
16
********************************************************************************

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* nextNode = nullptr;
    while(current != nullptr){
        nextNode = current->next;
        current->next = prev;
        prev  = current;
        current = nextNode;
    }
    while(prev != nullptr){
        std::cout<< prev->data<<endl;
        prev = prev->next;
    }
}
