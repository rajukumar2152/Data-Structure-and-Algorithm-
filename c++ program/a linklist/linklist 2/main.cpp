#include <iostream>

using namespace std;
struct Node
{
  int data ;
  Node* next;  // iska matlab yah hain ki next pointer to node hain
                        //node  ek structure hain iss case main .
} ;

void printlist(Node* n )
{
    while (n!=NULL)        //
    {
        cout<<n->data <<"  ";   /// isko bad me dekhna hain
        n= n->next ;
    }
}
void push(Node**refrm, int newdata ){

      Node* newnode = new Node();    //yaha refrance ek pointer to pointer to node hain
       newnode->data=newdata;
       newnode ->next= *refrm;
       *refrm= newnode;



}

int main()
{

    Node* head = NULL;   // head pointer to node structure   hain  jiska valu hamne  null hai yaha
    Node*first = NULL;
    Node*second =NULL;
    Node*third = NULL;
    Node*four =NULL;

    //allocate three node in the heap
    head = new Node();
    first = new Node();
    second = new Node();
    third = new Node ();
    four = new Node();



    head->data = 2;
    head-> next= first ;

    first->data= 4;
    first->next = second ;

    second -> data = 6;
    second -> next = third;

    third->data = 10;
    third->next=four;

    four->data=42;
    four->next =NULL;



     push(&head,789);
     push(&head ,123);
      push(&head, 555);
      push(&head,26);
    printlist(head );

   // function call kiya hain yaha

    return 0;
}
