#include "Player.hpp"
#include "Game.hpp"
#include <iostream>

namespace coup{

Player::Player(Game &g,std::string name){
        this->_player_name=name;
        this->curr_game=&g;
        this->curr_game->add_player(_player_name,"Duke");
        this->_coins=2;
    }
void Player::income(){
    this->change_player_coins(1);
    this->Set_last_action("income");
}
void Player::foreign_aid(){
    this->change_player_coins(2);
    this->Set_last_action("foreign_aid");
}

void Player::coup(Player &p){
    this->Set_last_action("coup");
    if (this->coins()>=7)
    {
        this->curr_game->delete_player(p.Get_player_name());
        this->change_player_coins(-7);
        std::cout<<"Player eliminated"<<std::endl;
    }
    else{
        //throw std::runtime_error ("You need 7 coins or more");
    }
    
}
Player::~Player(){}


}