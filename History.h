//
//  History.h
//  Project 1 Attempt 3
//
//  Created by Nathan Tran on 1/14/23.
//History header

#ifndef History_h
#define History_h
#include "globals.h"
class History
    {
    public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    private:
        int h_arena[MAXROWS][MAXCOLS]; //2D array that holds integer values corresponding to how many carrots have been dropped in that space --> later integer is converted to an alphabetical letter
        int h_rows;
        int h_cols;
    };

#endif /* History_h */
