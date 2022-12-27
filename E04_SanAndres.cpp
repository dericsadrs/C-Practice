//******************************************************************
// Filename:E04_SanAndres.cpp
// Date: August 08 2020
// Subject: CSDC102 - Fundamentals of Programming
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Fibonacci Recursion
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
// Complete Name: San Andres Deric
// ID Number: 201910320
// Year-Course: 2-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************
#include<iostream>
using namespace std;
int customFibonacci(int nthNumber,int a, int b)
{
    
    //for printing the added numbers;
    
    cout << a  << " ";
    
    // base case for program termination
    if( nthNumber == 1)
    {
        return 1;
    }
    else
    {
        // when the function call itself again, the nthNumber will decrement until it becomes 0 
        // each time the function calls itself a adds itself to b.
        //0+1 = 1
        //1+1 = 2 
        //1+2 = 3
        //2+ 3 = 5
        //5 + 3 = 8
        customFibonacci(nthNumber-1,b, a + b);   
    }
}
int main()
{
    // number of terms
    int nthNumber;
    
	cout << "Enter nth number for Fibonacci ";
	
	// input from user
   	cin >> nthNumber;
   	
   	customFibonacci(nthNumber,0,1);
	return 0;
}