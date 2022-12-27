//******************************************************************
// Filename:ME01_SanAndres.cpp
// Date:    10/15/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Doubly Linked List After
// Program Description:  Modify your code from Exercise # 7 by adding an insert after command on it. The program must now also be able to insert a node with a value of 1000 after the first instance of the node specified.
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
#include <iostream>

using namespace std;

class Node { // class
  public:
    int data,addedNodeAfter; 
    Node* next;
    Node* prev;
};

class LinkedList { 
  public:
    int length;
    Node *head;
    LinkedList();
    void add(int data);
    void deletion();
    void reverse();
    void print();
    void insertAfter(int data2,int data); // for inserting node after the first instance of the node specified.

};

LinkedList::LinkedList() {
    this->length = 0; 
    this->head = NULL;
}
void LinkedList::add(int data) {
    Node * insertNode = new Node;   
   
    insertNode->data = data; 
    insertNode->next = head;
    insertNode->prev = NULL; 
  
    if (head != NULL) 
        head->prev = insertNode; 
    head = insertNode; 

    this->length++;
}

void LinkedList::deletion()
{
    Node *deleteNode = this->head;
    this->head = deleteNode->next;
    
    delete deleteNode;
    this->length--;
}

void LinkedList :: reverse()        // for reversing the list 
    { 
      
        Node* latest = head; 
        Node* prev = NULL, *next = NULL; 
  
        while (latest != NULL)
        { 
            next = latest->next; 
  
            latest->next = prev; 
            //swap 
            prev = latest; 
            latest = next; 
        } 
            head = prev; 
            next = head;
    } 
void LinkedList :: insertAfter(int addedNodeAfter,int data) {
    Node * insertAfterNode = new Node; // create a new node for inserting
    Node * ptr = head;
    bool check = true;
    while(ptr != NULL)

    {
    if(ptr-> data == data)
    {
    // insert data
    insertAfterNode->data = addedNodeAfter; 
    // Make next of insertAfterNode as next of ptr
    insertAfterNode->next = ptr->next; 
    //5. Make the next of ptr as insertAfterNode 
    ptr->next = insertAfterNode; 
    // 6. Make ptr as previous of insertAfterNode
    insertAfterNode->prev = ptr; 
    print();
    check = true;
    break;
    }
    // finds the input of the user in the linked list 
    else if (ptr -> data != data)
    {
        check = false;
    }
    ptr = ptr -> next;

    }
    // if the input of the user was not found in the list this block will execute
    if(check == false)
    {
      cout << "VALUE NOT FOUND\n";
    }
}

void LinkedList::print() {
    Node *head = this->head;
    
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    
    cout << endl;
}

int main() {
    char command;
    int number;
    
    LinkedList *list = new LinkedList();
    for(int Iterator = 0; Iterator < 10; Iterator++) {
        cin >> command >> number;
     if( -100 <= number && number <= 100) {  // constraints, this checks if num is with -100 and 100.
     
        if (command == 'i') {
            list->add(number);
            cout << "[" << list->length << "] ";
            list->print();
        } else if (command == 'd') {
            if (list->length == 0) {
                cout << "LIST IS ALREADY EMPTY" << endl;
            } else {
                list->deletion();
                cout << "[" << list->length << "] ";
                list->print();
            }
        } else if (command == 'r') {
            if( list -> length == 0)
            {
                cout << "LIST IS ALREADY EMPTY\n";
            }
            delete list;
            LinkedList *list = new LinkedList();
            
            cout << "[" << list->length << "] ";
            list->print();
        } 
        else if ( command == 'e') {
            list ->reverse();
            cout << "[" << list->length << "] ";
            list ->print();
        }
        else if (command == 'a') {
            list -> insertAfter(1000,number);
        }
            else {
            cout << "INVALID COMMAND" << endl;
        }
    }
    }
    
    return 0;
}
