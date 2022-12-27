//******************************************************************
// Filename:E08_SanAndres.cpp
// Date:    10/2/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Chirit Chirit
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
#include <iostream>
#include <cmath>
using namespace std;

class Node {
  public:
    string data;
    Node *link;
};

class LinkedList {
  public:
    Node * top;
    LinkedList();
    void push(string data);
    void display();
};

LinkedList::LinkedList() {
    this -> top = NULL;
}

void LinkedList::push(string data) {
    
     Node* temp = new Node();
     temp->data = data;  
  
    // Put top pointer reference into temp link  
    temp->link = top;  
  
    // Make temp as top of Stack
    top = temp;  
    
}
void LinkedList::display() {
    
        Node* temp;  
        temp = top;  
        while (temp != NULL) 
        {  
  
            // Print node data  
            cout << temp->data << endl;  
  
            // Assign temp link to temp  
            temp = temp->link;  
        }  
 
}

int main() {
 
    LinkedList* list = new LinkedList();  
    int x,y; 
    string reverse[4] = {""};
    for(int Iterator = 0; Iterator < 4; Iterator++)
    {
	cin >> x >> y;
    	if(( 0 <= x && x <= pow(10,9)) && (2 <= y && y <= 16))
    	{
        	string bases = "0123456789abcdef"; 
        	string result = ""; 
	
        	while( x > 0)
        	{
	         	result = bases[x%y] + result; 
	          	x/= y; 
        	}
        	reverse[Iterator] = result;

         }
    }
     
     list -> push(reverse[3]);
     list -> push(reverse[2]);
     list -> push(reverse[1]);
     list -> push(reverse[0]);
     list -> display();
 
    return 0;
}
