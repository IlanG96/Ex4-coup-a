
#include "Game.hpp"
#include "Player.hpp"
namespace coup{
class Ambassador : public Player
{
private:
    //Player player_info;
    /* data */
public:
    using Player::Player;
    ~Ambassador(){}
    //void coup(Player p);
    void tax();
    void block(Player p);
    void transfer(Player from,Player to);
    //int coins();
    std::string role(){return "Ambassador";}
};
}
