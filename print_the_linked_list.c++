// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
   SinglyLinkedListNode* temp=head;
   while(temp!=nullptr){
       std::cout<<temp->data;
       temp=temp->next;
       if(temp!=nullptr){
           std::cout<<" "<<endl;
       }
   }
