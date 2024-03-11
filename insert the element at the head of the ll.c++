5
383
484
392
975
321
Sample Output

321
975
392
484
383
Explanation

Intially the list in NULL. After inserting 383, the list is 383 -> NULL.
After inserting 484, the list is 484 -> 383 -> NULL.
After inserting 392, the list is 392 -> 484 -> 383 -> NULL.
After inserting 975, the list is 975 -> 392 -> 484 -> 383 -> NULL.
After inserting 321, the list is 321 -> 975 -> 392 -> 484 -> 383 -> NULL.
****************************************************************************************************************

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    //constructor
    SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* current = newnode;
    if(llist == nullptr){
        llist = newnode;
    }else{
         current = newnode;
        current->next = llist;    
    }
    return current;
}
