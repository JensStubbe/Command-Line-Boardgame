#pragma once
#include "Tank.h"
#include <vector>
namespace BattlingTanks{
class Tank_array
{
    public:
        Tank_array();
        virtual ~Tank_array();

        Tank* get_tank(int i);
        int get_number_of_tanks();
        void set_number_of_tanks(int new_number_of_tanks);
        void add_tank(int x,int y);
        std::vector<Tank*> tanks;

    protected:

    private:
        int number_of_tanks;
};
}
