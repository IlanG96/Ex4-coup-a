#include <iostream>
#include <stdexcept>
#include <vector>
#include "Ambassador.hpp"

using namespace std;

namespace coup{
void Ambassador::transfer(Player from,Player to){
    this->Set_last_action("transfer");
    if (from.coins()<1)
    {
    throw std::runtime_error ("The player has 0 coins");
    }
    else{
        from.change_player_coins(-1);
        to.change_player_coins(1);
    }
    
}

//NEED to change that
void Ambassador::block(Player p){
    this->Set_last_action("block");
    if (p.Get_last_action()=="steal")
    {
        p.change_player_coins(-2);
    }
    else{
        //throw runtime_error("Ambassador can only block steal.");
    }
}
}