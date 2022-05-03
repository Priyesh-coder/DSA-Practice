/* Function to get the middle of the linked list*/
/*K will always be in range */

Node* deleteK(Node *head,int K)
{
  //Your code here
  long i = 1;
  Node* temp = head;
  if(K==0) return head;
  if(K==1) return NULL;
  
  while(temp && temp->next){
      if(i%(K-1) == 0){
          temp->next = temp->next->next;
      }
      i++;
      temp = temp->next;
  }
  return head;
}
