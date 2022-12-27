//******************************************************************
// Filename:E03_SanAndres.cpp
// Date: August 08 2020
// Subject: CSDC102 - Fundamentals of Programming
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Pointing Array to Elements;
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


/*How can we use a pointer to access each element in an array?
    When we pass the address of the array in the pointer, We  gain access to its elements. 
    We can access the pointer array using ptr =&arr[0]; or (ptr+1)
    Example: 
    array[5] = {1,2,3,4,5}
    *pointerForArray = array;
   
   When accesing a pointer, It's the same as an array:
   
   (*pointerForArray)   = 1 ---  array[0] = 1
   (*pointerForArray+1) = 2 ---  array[1] = 2
   (*pointerForArray+2) = 3 ---  array[2] = 3
   (*pointerForArray+3) = 4 ---  array[3] = 4
   (*pointerForArray+4) = 5   ---array[4] = 5 


*/
#include<iostream>
using namespace std;

//function prototype
void sumOfFiveNum();

int main()
{
    sumOfFiveNum();
}
void sumOfFiveNum()
{
    // array     // variblae sum for adding the five integers
    int array[5],sum = 0;
    
    // i passed the address of int array in the pointer "pointerForArray"
    int *pointerForArray = array;
    
    cout << "Enter five integers to be added:\n ";
    // loop to get the input of the user;
    for(int iteratorForInput = 0; iteratorForInput < 5; iteratorForInput++)
        {
            cin >> array[iteratorForInput];
        }
        //sample input: 1 2 3 4 5
        //output: 15
      
        for(int iteratorForSum = 0; iteratorForSum <5; iteratorForSum++)
            {
                sum+=*(pointerForArray+iteratorForSum);
            }
            *pointerForArray = sum;
            cout << "The sum of the five integers is: " << *pointerForArray;

}