#include "Game.hpp"
#include "Player.hpp"

namespace coup{
class Captain : public Player
{
private:
    //Player player_info;
public:
    // Captain(/* args */){}
    // Captain(Game g,std::string player_name);
    using Player::Player;
    ~Captain(){}
    //void income();
    //void foreign_aid();
    //void coup(Player p);
    void block(Player p);
    void steal(Player p);
    //int coins();
    std::string role(){return "Captain";}
};

}
