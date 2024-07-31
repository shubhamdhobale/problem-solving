
  temp->prev = NULL;
}

int main(){

  Node* temp = new Node(10);
  Node* head = temp;
  print(head);
  cout<<getLength(head)