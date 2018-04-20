#include "Board.h"
#include <iostream>
namespace BattlingTanks{
Board::Board()
{
    generate_board_grid();
}

Board::~Board()
{
    //dtor
}
void Board::generate_board_grid()
{
    for(int i = 0; i < ROW; i++) {
        for (int j = 0; j <COL; j++) {
            board_array[i][j] = "[.]";
        }
    }
}
void Board::change_tile(int x, int y, std::string sprite)
{
    board_array[x][y] = sprite;
    display_grid();
}
void Board::display_grid()
{
    for(int i = 0; i < ROW; i++) {
        for (int j = 0; j <COL; j++) {
            std::cout<<board_array[i][j];
        }
        std::cout<<std::endl;
    }
}
}
