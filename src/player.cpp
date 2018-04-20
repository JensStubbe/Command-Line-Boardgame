#include "player.h"

namespace BattlingTanks{
Player::Player()
{

}
Player::~Player()
{
    //dtor
}
void Player::collect_the_fallen(){
    for(unsigned int i=0; i<tanks.tanks.size(); i++ ){
        if(tanks.tanks.at(i)->get_health() == 0){
            tanks.tanks.erase(tanks.tanks.begin()+(i-1));
        }

    }
}
void Player::add_tank(int x,int y)
{
    tanks.add_tank(x,y);
    player_board.change_tile(x,y,"[T]");
}
Tank_array Player::get_tank_array()
{
    return tanks;
}
Board Player::get_board()
{
    return player_board;
}
}
