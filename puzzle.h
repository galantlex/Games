#include <iostream>
using namespace std;

class Puzzle
{
public:
    Puzzle();
    void print(); //prints current game state
    bool move(char c); //allows the user to move, returns true if possible

    bool won;

private:
    void updateboard(); //sets won if won

    char board[45]; //game board
    bool faces[7]; //array of the faces, bool for happy or sad
    int pos; //position in the array of the first face
};
