#include <string>
#include "Game.hpp"

#ifndef PLAYER_H
#define PLAYER_H
namespace coup{


class Player
{
private:
    std::string _player_name;
    //int _coins=0;
    std::string _last_action;
    //Game curr_game;

protected:
    Game* curr_game;
    int _coins=0;  
public:
    Player(){}
    Player(Game &g,std::string name);
    ~Player();

    std::string Get_player_name()const{return this->_player_name;}
    void Set_player_name(std::string name){this->_player_name=name;}
    void change_player_coins(const int &amount){this->_coins+=amount;}
    std::string Get_last_action()const{return this->_last_action;}
    void Set_last_action(std::string action){this->_last_action=action;}
    virtual void income();
    virtual void foreign_aid();
    virtual void coup(Player &p);
    virtual int coins(){return _coins;}
    //virtual std::string role()=0;

};

}
#endif