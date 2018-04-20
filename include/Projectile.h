#pragma once
namespace BattlingTanks{
class Projectile
{
    public:
        Projectile(int x,int y);
        virtual ~Projectile();
        int get_x();
        int get_y();

    protected:

    private:
        int x;
        int y;
};
}
