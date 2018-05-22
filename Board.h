#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <list>

#include "CheckBoard.h"
#include "Coordinate.h"
#include "IllegalCharException.h"
#include "IllegalCoordinateException.h"
//#include "TicTacToe.h"
//#include "Player.h"

using namespace std;


class Board {
    public:
    
        
        Board();
        
        Board(const int squer);
        
        Board(const Board& board); 
        
        ~Board();
        
        const Board& operator= (char Char) const;
        
        Board& operator= (const Board& board);

        CheckBoard& operator [](vector<int> point);
        
        CheckBoard& operator [](Coordinate coordinate) const;
     
        friend ostream& operator<< (ostream& os, const Board& board);
        
        void printBoard();
        
        int size() const;
        
        void setBoard(const int dimension);
        
        void setDimension(const int dimension);
        
        void setMatrix(const int dimension);
        
    private:
    
        CheckBoard** board;
        int squer;

};

#endif

