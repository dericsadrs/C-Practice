//******************************************************************
// Filename:E09_SanAndres.cpp
// Date:    10/7/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: You've been served
// Program Description:  a program that simulates this process of adding and removing students in the queue
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

#include<iostream>
using namespace std;
struct Queue{

 // Initialize front and rear 
    int rear, front; 
    int size;
    int QueueArrayFill = 0; 
    char command;
    int *QueueArr;         // array
  
    Queue(int s) 
    { 
       front = -1; 
       rear = -1; 
       size = s; 
       QueueArr = new int[s]; 

       for(int QueueNumbers = 0; QueueNumbers < s; QueueNumbers++)      // for filling the array;
       {
        QueueArr[QueueNumbers] = QueueArrayFill+=1;
       } 
    } 
    void enQueue();
    void deQueue(); 
    void display();
}; 

void Queue:: enQueue() {

    if(rear == size-1)  {            // checks if the rear is == to the size of the array
    
     cout << "QUEUE IS FULL\n";
    }

    else {
    rear++;
    display();
    }  
}

void Queue:: deQueue() {

    if ((rear == -1) || (rear == 0)) // checks if the queue is empty
    {
     cout << "QUEUE IS EMPTY\n";
     front++;
     rear =-1;
     return;
    }

    else if (front == size-1) // checks if the front is equal to size, this is to reset the queue if the top meets the maximum number of queues 
    {
      --rear;
      front = 0;
    }
    else{                    
      --rear;
      ++front;
}
display();
}
void Queue:: display() {  // for printing 

cout << QueueArr[rear] << " " << QueueArr[front] <<endl;

}


int main()
{
int N;
cin >> N; 

if( 2 <= N && N <= 10) // constraints 
{
    Queue Object(N);
    for(int Iterator = 0; Iterator < 13; Iterator++) // loop
        {
            cin >> Object.command;
            if(Object.command == 'A')
            {
                Object.enQueue();                 //enQueue
            }
            else if(Object.command == 'R')
            {
                Object.deQueue();                //deQueue
            }
        }

}







}