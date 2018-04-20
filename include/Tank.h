#pragma once
#include "Projectile.h"
namespace BattlingTanks{
class Tank
{
    public:
        Tank(int x,int y);
        virtual ~Tank();
        Projectile shoot(int x,int y);
        bool get_shot(int x,int y);
        int get_x();
        int get_y();
        int get_health();

    protected:

    private:
        int x;
        int y;

        int health;

        bool shot;

        void set_position(int x,int y);

        //Projectile projectile;
};
}
