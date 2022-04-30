#include <iostream>
#include <stdexcept>
#include <vector>
#include "Captain.hpp"
using namespace std;

namespace coup{
// Captain::Captain(Game g,string player_name){
//     this->player_info=Player(player_name,g);
//     this->curr_game.add_player(player_info.Get_player_name(),"Ambassador");
//     this->player_info.change_player_coins(2);
// }

//NEED to change that
void Captain::block(Player p){
    this->Set_last_action("block");
    if (p.Get_last_action()=="steal")
    {
        p.change_player_coins(-2);
    }
    else{
        //throw runtime_error("Captain can only block steal.");
    }
}

void Captain::steal(Player p){
    this->Set_last_action("steal");
    if (p.coins()<2)
    {
    //throw std::runtime_error ("The player has less then 2 coins");
    }
    else{
        p.change_player_coins(-2);
        this->change_player_coins(2);
    }
}
}