#include "Projectile.h"
namespace BattlingTanks{
Projectile::Projectile(int x,int y)
{
    this->x = x;
    this->y = y;
}

Projectile::~Projectile()
{
    //dtor
}
int Projectile::get_x()
{
    return x;
}
int Projectile::get_y()
{
    return y;
}
}
