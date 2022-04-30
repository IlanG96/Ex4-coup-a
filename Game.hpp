
#include <vector>
#include <string>
#include <map>
#ifndef GAME_H
#define GAME_H
namespace coup{
class Game
{
private:
    std::map<std::string,std::string> players_roles;
public:
    Game(/* args */){}
    ~Game(){}
    void add_player(std::string p,std::string role);
    void delete_player(std::string p);
    std::vector<std::string> players();
    std::string turn();
};
}
#endif