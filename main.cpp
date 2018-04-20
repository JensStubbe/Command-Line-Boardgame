#include <string>
#include <iostream>
#include <process.h>
#include <cstdlib>
#include <time.h>
#include <Game_engine.h>
#include "Board.h"

using namespace BattlingTanks;

int main()
{
    Game_engine battleTanks;
    do{
        battleTanks.player_guess();
        battleTanks.npc_guess();
    }while(!battleTanks.end_game());
    return 0;
}
