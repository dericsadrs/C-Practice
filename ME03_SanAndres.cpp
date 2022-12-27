//******************************************************************
// Filename:ME03_SanAndres.cpp
// Date:    10/15/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Rearrange The Q
// Program Description:  During enrollment, all students in ADXU line up in front of the Treasurer’s Office (TO) to pay for their tuition. Sadly, the office went on a lunch break and is temporarily closed.
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
#include<cmath>
using namespace std;
void studentInFront (int arrayA[], int arrayB[], int sizeOfArray)
{
    int front = -1, rear;

    int startOfLine,testCase = 0;
    for(int i = 0; i < sizeOfArray; i++) // to find the start of the line 
    {
        if(arrayA[i] == 0)
        {
            startOfLine = i;
            break;
        }
        
    }
    rear = startOfLine;
    
    
    while(testCase != sizeOfArray) // while testcase is not equal to the size of array
    {
        front++;
        if(arrayA[front] == arrayB[rear]) // checks if the A[front] is equal to the B[rear]
        {
            cout << arrayB[rear] << " " ; // to print the student in the line 

            // since  An is the ID number of a person in front of the student and Bn is the ID number of the student.
            // rear will be now equal to front

            rear = front;
            front = -1;
            testCase++; // testcase will increment
        }
        // this for printing the last student in the queue
        else if(front == sizeOfArray)
        {
            cout << arrayB[rear];
            testCase++;
        }
    }
            
    
    
}
int main()
{   int N;
    cin >> N;
    int A[N]; // array A;
    int B[N]; // array B;
    for(int iteratorForTestCases = 0; iteratorForTestCases < N; iteratorForTestCases++) // test cases
    {
        cin >> A[iteratorForTestCases] >> B[iteratorForTestCases]; //input
    }

   studentInFront(A,B,N); //

}