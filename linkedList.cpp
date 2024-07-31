#include <iostream>
using namespace std;

/*

// Single Linked List
class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  // Destructor
  ~Node()
  {
    int value = this->data;

    // Memory Free
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for " << value << endl;
    
  }
};

void print(Node *&head)
{

  if (head == NULL)
  {
    cout << "List is empty " << endl;
    return;
  }
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d)
{
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
  // insert at Start
  if (position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  // inserting at Last Position
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }

  // creating a node for d
  Node *newNode = new Node(d);
  newNode->next = temp->next;
  temp->next = newNode;
}

void deleteNode(Node* &head , int position){

  //deleting starting Node
  if(position == 1){
    Node* temp = head;
    head = head->next;

    //free memory space
    temp->next = NULL;
    delete temp;
  }
  else{
    //Deleting Node at any Position
    Node* curr = head;
    Node *prev = NULL;
    int cnt = 1;
    
    while(cnt < position){
      prev=curr;
      curr = curr->next;
      cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int main()
{

  Node *temp = new Node(10);
  Node *head = temp;
  Node *tail = temp;
  insertAtHead(head, 20);
  insertAtTail(tail, 30);
  print(head);
  insertAtPosition(head, tail, 4, 50);
  print(head);
  deleteNode(head , 2);
  print(head);

  return 0;
}

*/


/*
//Doubly Linked List
class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }

  ~Node(){
    int value = this->data;

    if(next == NULL){
      delete next;
      next = NULL;
    }
    cout<<"Memory free for "<< value <<endl;
  }
};

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int getLength(Node* head){
  int len=0;
  Node* temp = head;
  while(temp != NULL){
    temp = temp->next;
    len++;
  }
  return len;
  cout<<endl;
}

void inserAtHead(Node* &head , int data){
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
  temp->prev = NULL;
}

void insertAtTail(Node* &tail , int data){
  if(tail == NULL){
    Node* temp = new Node(data);
    tail = temp;
  }else{

  Node* temp = new Node(data);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
  }
}

void insertAtPosition(Node* head , Node* tail , int position , int data){
  // if(position < 0 || position > getLength(head)){
  //   cout<<"Invalid position"<<endl;
  //   return;
  // }

  if(position == 1){
    inserAtHead(head , data);
    return;
  }

  Node* temp = head;
  int cnt = 1;

  while(cnt < position - 1){
    temp = temp->next;
    cnt++;
  }

  if(temp->next == NULL){
    insertAtTail(tail , data);
    return;
  }

  Node* newNode = new Node(data);
  newNode->next = temp->next;
  temp->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
}

void deleteNode(int position , Node* &head){
  if(position == 1){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else{
    Node* prev = NULL;
    Node* curr = head;
    int cnt = 1;
    while(cnt < position){
      prev = curr;
      curr = curr->next;
      cnt++;
    }

    prev->next = curr ->next;
    curr->next = NULL;
    curr->prev = NULL;

    delete curr;
  }
}

int main(){

  Node* temp = new Node(10);
  Node* head = temp;
  Node* tail = temp;
  // print(head);
  cout<<getLength(head) << endl;
  inserAtHead(head , 20);
  print(head);
  insertAtTail(tail ,40);
  print(head);
  insertAtPosition(head , tail , 2 , 2);
  print(head);
  deleteNode(2 , head);
  print(head);

  return 0;
}

*/


//Circular LL
class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

int main() {

  Node* tail = NULL;

  insertNode(tail, 5, 3);
  print(tail);

  insertNode(tail, 3, 5);
  print(tail);

  deleteNode(tail , 3);
  print(tail);
 return 0;
}