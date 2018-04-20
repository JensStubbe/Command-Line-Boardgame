#pragma once
#include "Board.h"
#include "Tank_array.h"
#include "Base_Player_Class.h"

namespace BattlingTanks{
class NPC//:public Base_Player_Class
{
    public:
        NPC();
        virtual ~NPC();

        void generate_enemy_tank();
        Tank_array get_tank_array();
        Board get_board();
        void collect_the_fallen();

    protected:

    private:

        void add_tank(int x, int y);

        const int tank_amount = 2;

        Board npc_board;
        Tank_array tanks;
};
}
