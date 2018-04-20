#pragma once
#include "player.h"
#include "NPC.h"
#include "Tank.h"
#include "Projectile.h"
namespace BattlingTanks{
class Game_engine
{
    public:
        Game_engine();
        virtual ~Game_engine();
        void player_guess();
        void npc_guess();
        bool end_game();

    protected:

    private:

        void win_screen();
        void game_over();
        void info_screen();

        void npc_receive_damage(Projectile projectile);
        void player_receive_damage(Projectile projectile);
        void where_should_the_tanks_be_placed();

        int turns;
        const int tank_amount = 2;

        Player player;
        NPC computer;
};
}
