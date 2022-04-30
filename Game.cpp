#include "Game.hpp"
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
namespace coup{
void Game::add_player(string p,string player){
    this->players_roles.insert(pair<string,string>(p,player));
}
void Game::delete_player(string p){
    this->players_roles.erase(p);
}
string Game::turn(){
    return "sss";
}
vector<string> Game::players(){
    vector<string> player;
    int i=0;
    for(auto it : players_roles) {
        player.push_back(it.first);
    }
    return player;
}
}
