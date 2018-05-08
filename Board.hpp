
#include <iostream>
#include <vector>
#include <list>
#include "BoardMem.cpp"
#include "IllegalCoordinateException.cpp"

using namespace std;

class Board {
    public:
    int size; 
    vector <vector <BoardMem> > board;
    Board(int x) ;

    friend ostream& operator << ( ostream& op, const Board& bo);

    BoardMem& operator [] (list <int> lis);

    Board& operator = (char c);

    Board& operator = (Board b);


};

