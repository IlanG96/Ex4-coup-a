#include "Game.hpp"
#include "Player.hpp"
namespace coup{
class Duke : public Player
{
private:
 //Game curr_game;
public:
    using Player::Player;
    ~Duke();
    void tax();
    void block(Player &p);
    //int coins();
    std::string role(){return "Duke";}

};
}