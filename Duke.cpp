#include <iostream>
#include <stdexcept>
#include <vector>
#include "Duke.hpp"
using namespace std;


namespace coup{

void Duke::tax(){
    this->change_player_coins(3);
        this->Set_last_action("tax");
}

//int Duke::coins(){return 0;}

void Duke::block(Player& p){
    this->Set_last_action("block");
    if (p.Get_last_action()=="foreign_aid")
    {
        p.change_player_coins(-2);
    }
    else{
        //throw runtime_error("Duke can only block foreign aid.");
    }
}
Duke::~Duke(){}
}
