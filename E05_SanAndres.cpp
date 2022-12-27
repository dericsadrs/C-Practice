//******************************************************************
// Filename:E05_SanAndres.cpp
// Date:    8/28/2020
// Subject: CSDC101 - Fundamentals of Programming
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Code Indentation and Annotation [Simple Linked List]
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
//******************************************************************
#include <iostream>
#include <cstdlib>
using namespace std;

// in order to use linked Lists we have to use class
class Node 
    {
    
    public:     // to access variables outside of class
    Node* next; //the node next which represents a node pointer called next. 
    int data;  //data which represents the data part that holds the integer value  
    
    };

class LinkedList 
    {
    
    public:    
    int length;             // length for the items in the list
    Node* head;             // head
    LinkedList();         // constructs the values of data members of the class.
    ~LinkedList();       // destructor for de-allocating the memory that has been allocated for the object by the constructor.
    void add(int data); // for traversing data  
    void print();       // for printing 
    
    };
    
    LinkedList::LinkedList() // constructor 
    {    
        this->length = 0; // assign length to 0, This for the iteration on how many items are in the list.
        this->head = NULL; // link head to NULL, since the list is  empy we set it to NULL, Later it will be allocated.
        
    }
    
    LinkedList::~LinkedList() // destructor
    {    
        cout << "LIST DELETED"; //print
        
    }
    
    void LinkedList::add(int data) // this for traversing the list
     {    
         // one block have been allocate dynamically
         Node* node = new Node(); 
         
         // In order the list to traverse/move, we have to use ->, which just like pointing address to an another variable.
         // assign data in the first node
         node->data = data;   
         
         //  Linked next with head
         node->next = this->head;    
         
         // link head with node
         // this for the inserting of new items in the list.
         this->head = node;
         
         // this is for counting the iteration, on how many items are in the list.
         this->length++;
         
     }
        
        void LinkedList::print() // print
        {    
            Node* head = this->head;  
             int i = 1; 
             
             while(head)// while head is not equal to  NULL
              {        
                        // for printing the items in the list
                        cout << i << ": " << head->data << endl;
                        
                        // the head now points to the next node.
                        head = head->next; 
                        
                        // for iteration in in printing 
                        i++;  
              }
                        
        }
                    int main()
                     {    
                         // new operator denotes a request for memory allocation on the Free Store. 
                         //If sufficient memory is available, 
                         //new operator initializes the memory and returns the address of the newly allocated and initialized memory.
                         LinkedList* list = new LinkedList(); 
                         
                            // iteration
                            for (int i = 0; i < 5; ++i)
                                 {     
                                        // rand for randon numbers from 0 to 100
                                        // this for inserting numbers in the list.
                                        // list now points to add.
                                        list->add(rand() % 100); 
                                 } 
                                        // list now points to print
                                        // for printing the random numbers;
                                          list->print(); 
                                          // for printing the list length
                                          cout << "List Length: " << list->length << endl;\
                                          
                                          //destructor
                                          // deletes the list
                                          delete list;
                                            
                                         return 0;
                      }