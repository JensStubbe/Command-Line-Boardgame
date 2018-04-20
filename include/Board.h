#pragma once
#include <iostream>
namespace BattlingTanks{
class Board
{
    public:
        Board();
        virtual ~Board();

        void change_tile(int x, int y, std::string sprite);
        void display_grid();

    protected:

    private:
        const int ROW = 3;
        const int COL = 3;

        std::string board_array[3][3];

        void generate_board_grid();
};
}
