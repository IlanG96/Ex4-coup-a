#include <iostream>
#include <stdexcept>
#include <vector>
#include "Contessa.hpp"
using namespace std;

namespace coup{
// Contessa::Contessa(Game g,string player_name){
//     this->player_info=Player(player_name,g);
//     this->curr_game.add_player(player_info.Get_player_name(),"Contessa");
//     this->player_info.change_player_coins(2);
// }
// void Contessa::income(){
//     this->change_player_coins(1);
//     this->Set_last_action("income");
// }
// void Contessa::foreign_aid(){
//     this->change_player_coins(2);
//     this->Set_last_action("foreign_aid");
// }

//NEED to change that
void Contessa::block(Player p){
    this->Set_last_action("block");
    if (p.Get_last_action()=="coup")
    {
        //?????
    }
    else{
        //throw runtime_error("Contessa can only block coup.");
    }
}
}