//******************************************************************
// Filename:E01_SanAndres.cpp
// Date: August 08 2020
// Subject: CSDC101 - Fundamentals of Programming
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Arrays
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
// Complete Name: Adrian San Andres Deric
// ID Number: 201910320
// Year-Course: 2-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************




/*Questions to answer:

How do we look for the smallest value within an array?

    -First we have to get the index of each element in the array. Second we create a varaible to store the lowest number within the array.
    Third, We create a loop to scan all the intergers in the array, and compare each and every one of them using the variable we created to store the lowest value.

How do we pass arrays to functions?
    -We can pass arrays to functions by declaring parameters. First create a function, Then add parameters ex(Function Name(int parameter array[]). In creating 
    parameters we must keep in mind that, when passing variables to a function they must contain the same type of data.
    Another thing, is we can also use pointers to pass arrays to functions (Which is more convenient)
    
*/
#include<iostream>
using namespace std;

//function prototype
int  smallestIndex(int array[],int size);

int main()
{
    //array with an index of 5
    int size,array[5];
    cout << "  Enter Size of Array: ";
    cin >> size;
    cout << endl;
    cout << "  Enter your integers\n";
    cout << "  ";
    
    // loop for input
    for(int iteratorForInput = 0; iteratorForInput < size; iteratorForInput++)
        {
            cin >> array[iteratorForInput];
        }
        //passing of variables
        //ouput
        cout << "  The lowest number in the array is " <<smallestIndex(array,size);
    
}

int smallestIndex(int array[], int size)
{
    // i declared 1000000 because this the maximum input to be compared.
    int lowestNum = 1000000;
    
    // loop for scanning all the integers in the array
    for (int iteratorForComparing = 0; iteratorForComparing < size; iteratorForComparing++)
        {
            // the first index will be equals to lowestNum because, We will compare it to the other index in the array.
                if(array[iteratorForComparing] < lowestNum)
                {
                     // if  an another index in the array is lower than the lowestNum, Then lowestNum will be updated.
                    lowestNum = array[iteratorForComparing];
                }
        }
        // return the lowestNumber in the array.
         return lowestNum; 

}