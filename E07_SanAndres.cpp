//******************************************************************
// Filename:E07_SanAndres.cpp
// Date:    9/25/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Insertion and Display Simple Linked List
// Program Description:
// Input:
// Output:
//
// Honor Code:
//   This is my own program. I have not received any        
//   unauthorized help in completing this work. I have not  
//   copied from my classmate, friend, nor any unauthorized 
//   resource. I am well aware of the policies stipulated   
//   in the handbook regarding academic dishonesty. If proven 
//   guilty, I won't be credited any points for this activity.
//
// Complete Name: San Andres Deric C
// ID Number: 201910320
// Year-Course: 2-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University

#include<iostream>          // library
using namespace std;     

class Node{
  
  public: 
  int data;
  Node* next;
  Node* prev;
    
};

class LinkedList{
    
    public:
    Node* head;
    Node* tail;
    LinkedList();                // constructor
    void add (int data);         // for integers  in the list 
    void deletion();            // for deleting a node 
    void refresh();             // for deleting the entire list
    void reverse();             // for reversing the list 
    void print();               // for printing the list
    
};

 LinkedList::LinkedList() 
    { 
        this->head = NULL;
        this-> tail = NULL;
    }

void LinkedList::add(int data)  
{
     Node* node = new Node();            
    node->data = data;                  // In order for the list to store inputs, node which points to the data, is equals to the addres of the head.
    node->next = this->head;            //  Link next with head
    this->head = node;                  // // link head with node
}
void LinkedList::deletion()
{
     Node* prev = head; 
     Node *deleteNode = head;  // deleteNode represents the head in this function
     
     // for deleting the first node 
     if( tail == NULL)
     {
     deleteNode->data;               // assign data to deleteNode
     head = deleteNode->next;        // head is equals to the deleteNode which is linked to the next node.
     free(deleteNode);
     }
     else {
         
         // for deleting the last node
    while (prev->next->next != NULL) 
    {
        prev = prev->next; 
    }
    
    // Delete last node
    delete (prev-> next); 
    // Change next of second last 
    prev->next = NULL; 
     }
     
}
void LinkedList::print()             // for printing 
{
    Node* head = this->head; 

       while(head)
       {
        cout  << head->data << " ";        
        head = head->next;          // for the list to move 
        }
        
}
void LinkedList:: refresh()         // for deleting the entire list
{   
    
    while( head != NULL)            // while head is not equal to NULL                               // the head will point to data.
    {                               // the head will be unallocated, making it availabe again for futher allocation 
    head -> data;                   // head again, will point the next node, until all the nodes are NULL.
    free(head);
    head = head -> next;
    }
    
}
void LinkedList :: reverse() 
    { 
      
        Node* latest = head; 
        Node* prev = NULL, *next = NULL; 
  
        while (latest != NULL)
        { 
            next = latest->next; 
  
            latest->next = prev; 
  
            prev = latest; 
            latest = next; 
        } 
            head = prev; 
            tail = head;
    } 
int main()
{
    LinkedList* list = new LinkedList();  
    int num,i = 0; 
    char ch;
    while(list != NULL)
    {
        cout << endl;
        cin >> ch >> num; // inputs 
        if(ch == 'i' || ch == 'd' || ch == 'r' || ch == 'e') // constraints, this checks if the char ch is within the scope.
        {
             if( -100 <= num && num <= 100)  // constraints, this checks if num is with -100 and 100.
             {
               if( ch == 'i') // for insertion 
               {
                   i++;
                   list->add(num);  // list points to the function add 
                   cout <<"[" << i << "]";
                   list->print(); // list points to the print function 
               }
               else if( ch == 'd')  // for deletion 
               {
                   if( list -> head == NULL) // to check if the list is empty
                    {
                        cout << "THE LIST IS ALREADY EMPTY";
                        break;
                    }
                  i--;
                  list->deletion(); // list points to he function deletion
                   cout <<"[" << i << "]";
                   list->print(); // list points to the print function 
               }
               else if(  ch == 'r') // for deleting the entire list
               {
                    if( list -> head == NULL) // to check if the list is empty
                    {
                        cout << "THE LIST IS ALREADY EMPTY";
                        break;
                    }
                    else{
                    i = 0;
                    cout << "[" << i << "]";
                    list -> refresh(); // list points to the function refresh
                    list->print(); // list points to the print function 
                    }
    
               }
               else if( ch == 'e')
               {
                   list -> reverse();
                   cout << "[" << i << "]";
                   list->print(); // list points to the print function 
                   
                   
               }
               
             }
        }
        else 
        {
            cout << "INVALID COMMAND";
        }   
   }
}