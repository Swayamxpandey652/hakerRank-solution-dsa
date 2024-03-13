Delete the node at a given position in a linked list and return a reference to the head node. The head is at position 0. The list may be empty after you delete the node. In that case, return a null value.
**************************************************************************************

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
   if(llist == nullptr){
       return nullptr;
   }
   if(position == 0){
       llist = llist->next;
       return llist;
   }
   SinglyLinkedListNode* current = llist;
   for(int i=0;current != nullptr && i < position - 1; ++i){
       current = current->next;
   }
   if(current == nullptr || current->next == nullptr){
       return llist;
   }
    SinglyLinkedListNode* value = current->next->next;
    current->next = value;
    return llist;
}
