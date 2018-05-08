
#include "Board.hpp"
using namespace std;




    Board::Board(int x) {
        size = x; 
        for (int i = 0; i<this->size; i++){
            vector<BoardMem> row; 
            for(int j = 0 ; j<this->size; j++){
                BoardMem bm (i, j, '.');
                row.push_back(bm); 
            }
            board.push_back(row); 
        }
    }


     ostream& operator << ( ostream& op, const Board& bo){
        for (int i = 0; i<bo.size; i++){
            for(int j = 0 ; j<bo.size; j++){
                op<< bo.board[i][j];
            }
            op<<endl;
        }
        return op;
    }

    BoardMem& Board::operator [] (list <int> lis){
        int i = lis.front();
        int j = lis.back();

        if(i >= size || i < 0 || j >= size || j < 0  ){
            IllegalCoordinateException ex(i,j);
            throw ex;
        }

        return this->board[i][j];
    }

    Board& Board::operator = (char c){
        
        if (c != 'O' && c != '.' && c!= 'X'){
            IllegalCharException ex(c);
            throw ex;
        }

        for (int i = 0; i < size; i++){
            for(int j = 0 ; j < size; j++){
                board[i][j] = '.';
            }
        }

            return (*this);
        }

    Board& Board::operator = (Board b){


        for (int i = 0; i < size; i++){
            for(int j = 0 ; j < size; j++){
                board[i][j] = b.board[i][j];
            }
        }
       
       return (*this);
    }

