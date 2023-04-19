//
//  History.cpp
//  Project 1 Attempt 3
//
//  Created by Nathan Tran on 1/14/23.
//History implementation
#include <iostream>
#include "History.h"
#include "globals.h"


History::History(int nRows, int nCols)
{
    h_rows = nRows;
    h_cols = nCols;
    for (int r = 1; r <= h_rows; r++)
    {
        for (int c = 1; c <= h_cols; c++)
        {
            h_arena[r-1][c-1] = 0; //creates a grid and sets every space to 0
        }
    }
}

bool History::record(int r, int c)
{
    if (r-1 <= h_rows && r-1 >= 0 && c-1 <= h_cols && c-1 >= 0)
    {
        h_arena[r-1][c-1]++; //adds 1 to the grid space that a carrot has been dropped at
        return true;
    }
    else
        return false;
}

void History::display() const
{
    clearScreen();
    for (int r = 1; r <= h_rows; r++)
    {
        for (int c = 1; c <= h_cols; c++)
        {
            if( h_arena[r-1][c-1] == 0)
            {
                std::cout << ".";
            }
            else if( h_arena[r-1][c-1] >= 26)
            {
                std::cout << "Z";
            }
            else
            {
                char alphaVar = 'A' + h_arena[r-1][c-1] - 1; //converts integer value to a corresponding alphabetical letter
                std::cout << alphaVar;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}





