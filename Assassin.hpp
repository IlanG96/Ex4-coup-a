#include "Game.hpp"
#include "Player.hpp"

namespace coup{
class Assassin: public Player 
{
private:
     //Player player_info;
public:
    using Player::Player;
    ~Assassin(){}
    void coup(Player p);
    //int coins();
    std::string role(){return "Assassin";}
};
}