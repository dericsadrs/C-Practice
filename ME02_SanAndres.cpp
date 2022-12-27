//******************************************************************
// Filename:ME02_SanAndres.cpp
// Date:    10/15/2020
// Subject: CSDC103 
// Semester: Second Semester, S/Y 2019 - 2020
// 
// Program Title: Stealing Christmas
// Program Description:  It’s Christmas Eve at Whoville and the Grinch is trying to ruin Christmas again! This time, he plans to steal the most special gift stacked under the Christmas tree on each of the houses he visits. 
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

struct stealingChristmas {

    int top = -1;
    int length;
    string concatonate,concatonate2; // for storing the output
    char stackOfGifts[100];          // for storing the stack of gifts
    void push( char gifts)          // for stacking the gifts
    {
        top++;
        stackOfGifts[top] = gifts;
    }
    void pop (char giftToBeStolen) // for stealing the gift in the stack
    {
        if( stackOfGifts[top] == giftToBeStolen) // if the grinch finds the gift in the top of the stack 
        {
           // if the grinch finds the gift 
           // stackOfGifts[top] (the gift that grinch want to steal) will no be equal to a whitespace
           stackOfGifts[top] = ' ';


            // concatonate the stack of gifts that were unchecked by the grinch since he already found the gift he wants
            for(int index = -1; index < top; index++)
            {
            concatonate += stackOfGifts[index];
            }
        }

       else {
           int index;

            // this for finding the gift that the grinch want somewhere in the middle of the stack.
            for(index = top; index > -1; index--)
            {
                if(stackOfGifts[index] == giftToBeStolen) // if the grinch finds the gift
                {
                    // if the grinch finds the gift 
                 // stackOfGifts[top] (the gift that grinch want to steal) will no be equal to a whitespace
                    stackOfGifts[index] = ' ';

                    // if the grinch find the gift somewhere in the middle of the stack and there are still gifts that were unchecked.
                    if(index > 0)
                    {
                        for(int index2 = -1; index2 < index+1; index2++)
                        {
                    // concatonate the stack of gifts that were unchecked by the grinch
                        concatonate2+=stackOfGifts[index2];
                        }
                        concatonate2+=concatonate;
                        concatonate = " ";
                        concatonate = concatonate2;
                    }
                    break;
                }
                // if the grinch did not find the gift, this will create a new stack of checked gifts.
                else
                {
                concatonate+=stackOfGifts[index];
                }
            }
       }
       
    }
       
};



int main()
{
    int T;
    char C;
    string G;
    cin >> T;
    stealingChristmas S[T]; //array of objects;
    if(1<= T && T <= pow(10,5)) // constraints
    {
    for(int stuctIterator = 0; stuctIterator < T; stuctIterator++) // loop
    {
        cin >> C;
        if(islower(C) && isalpha(C)) // checks if C is in lowercase and checks if c is ASCll
        {
        cin >> G;
        for(int i = 0; i <G.length(); i++) // checks if the index of string G is in lowercase and an ASCll
            {
                if(islower(G[i]) && isalpha(G[i]))
                {
                S[stuctIterator].push(G[i]);
                }
            }
        S[stuctIterator].pop(C); // passed the C, C will be the item stolen in the stack. 
        }
    }
    for( int stuctIterator2 = 0; stuctIterator2 < T; stuctIterator2++)
    {
        cout << S[stuctIterator2].concatonate << endl;
    }
    }
    else
    {
        exit;
    }
}