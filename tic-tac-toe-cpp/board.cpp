#include "board.hpp"

class Board {
    private:
        int board[3][3];
    public:
        Board::Board() {
            board = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        }

        bool checkWin(int arr[3][3]);

        int playerEdit(int input);

        int getBoard() {return board};
}