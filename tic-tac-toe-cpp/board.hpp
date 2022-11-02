#ifndef BOARD_H
#define BOARD_H

class Board {
    private:
        int board[3][3];
    public:
        Board();

        bool checkWin(int arr[3][3]);

        int playerMove(int input);

        int getBoard() {return board};
}

#endif