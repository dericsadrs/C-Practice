//******************************************************************
// Filename:E02_SanAndres.cpp
// Date: August 08 2020
// Subject: CSDC101 - Fundamentals of Programming
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Classifying students
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


#include<iostream>
#include<fstream>
using namespace std;

// function prototype
void file();

int main()
{
  file(); 
}
void file()
{
    ifstream pasok;
    pasok.open("input.in");
    
    // for storing the integers in the file
    int rangeScore[8] ={0,0,0,0,0,0,0,0};
    int data;
    
    // This variables that I declared is for counting the result  for each score.
    // I use multiple int declarations to make it neat, Since we are not utilizing memory.

    if(pasok.fail())
    {
        cerr << "Error accessing file\n";
    }
    
    while(!pasok.eof() && pasok >> data)
    {
            
    //cout << array[i] << " ";
            // this checks if the number in the file is in range of 0 to 24
            if(data >= 0 && data <= 24)
            {
            //since the data is in the range of 0 to 24 the index rangeScore[1] will pre increment;
            rangeScore[0]++;
            }
              // this checks if the number in the file is in range of 25 to 49
           else if(data >= 25 && data <= 49)
            {
             //since the data is in the range of 26 to 49 the index rangeScore[2] will pre increment;
                rangeScore[1]++;
           }
          // this checks if the number in the file is in range of 50 to 74
          else if(data>= 50 && data <= 74)
           {
            //since the data is in the range of 50 to 74 the index rangeScore[3] will pre increment;
            rangeScore[2]++;
           }
           // this checks if the number in the file is in range of 75 to 99
           else if(data >= 75 && data <= 99)
           {
            //since the data is in the range of 75 to 99  the index rangeScore[4] will pre increment;
            rangeScore[3]++;
           }
           // this checks if the number in the file is in range of 100 to 124
           else if( data >= 100 && data <= 124)
           {
                //since the data is in the range of 100 to 124  the index rangeScore[5] will pre increment;
            rangeScore[4]++;
           }
           // this checks if the number in the file is in range of 125 to 149
           else if( data >= 125 && data <= 149)
           {
           //since the data is in the range of 125 to 149 the index rangeScore[6] will pre increment;
            rangeScore[5]++;
           }
           // this checks if the number in the file is in range of 150 to 174
          else if( data >= 150 && data <= 174)
           {
            //since the data is in the range of 150 to 174 the index rangeScore[7] will pre increment;
            rangeScore[6]++;
          }
           // this checks if the number in the file is in range of 175 to 200
         else if( data>= 175 && data <= 200)
          {
            //since the data is in the range of 175 to 200 the index rangeScore[8] will pre increment;
            rangeScore[7]++;
          }
          
        }
     cout << endl;
     cout << " The number of students who got 0 - 24  is: " << rangeScore[0] <<endl;
     cout << " The number of students who got 25 - 49 is: " << rangeScore[1] <<endl;
     cout << " The number of students who got 50 - 74 is: " << rangeScore[2] <<endl;
     cout << " The number of students who got 75 - 99 is: " << rangeScore[3] << endl;
     cout << " The number of students who got 100 - 124 is: " << rangeScore[4] << endl;
     cout << " The number of students who got 125 - 149 is: " << rangeScore[5] << endl;
     cout << " The number of students who got 150 - 174 is: " << rangeScore[6] << endl;
     cout << " The number of students who got 175 - 200 is: " << rangeScore[7] << endl;
}