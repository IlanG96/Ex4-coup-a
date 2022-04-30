#include <iostream>
#include <stdexcept>
#include <vector>
#include "Assassin.hpp"
using namespace std;

namespace coup{
void Assassin::coup(Player p){
    this->Set_last_action("coup");
    if (this->coins()>=3)
    {
        this->curr_game->delete_player(this->Get_player_name());
        this->change_player_coins(-3);
        std::cout<<"Player eliminated"<<std::endl;
    }
    else{
        //throw std::runtime_error ("You need 3 coins or more");
    }
    
}


}