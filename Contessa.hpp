#include "Game.hpp"
#include "Player.hpp"

namespace coup{
class Contessa : public Player
{
private:
    //Player player_info;
public:
    // Contessa(/* args */){}
    // Contessa(Game g,std::string player_name);
    using Player::Player;
    ~Contessa(){}
    //void income();
    //void foreign_aid();
    //void coup(Player p);
    void block(Player p);
    //int coins();
    std::string role(){return "Contessa";}
};

}
