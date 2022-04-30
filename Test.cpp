#include <iostream>
using namespace std;
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <stdexcept>
#include "doctest.h"

TEST_CASE("No error Game"){
    coup::Game game_1{};
    coup::Duke duke{game_1, "Moshe"};
	coup::Assassin assassin{game_1, "Yossi"};
	coup::Ambassador ambassador{game_1, "Meirav"};
	coup::Captain captain1{game_1, "Reut"};
    coup::Captain captain2{game_1, "Shlomi"};
	coup::Contessa contessa{game_1, "Gilad"};
    CHECK_EQ(6,game_1.players().size());
    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain1.income());
    CHECK_NOTHROW(captain2.income());
	CHECK_NOTHROW(contessa.income());
    CHECK_NOTHROW(duke.foreign_aid());
    cout << duke.coins() << endl; // prints 2
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.transfer(duke,assassin));
    CHECK_NOTHROW(captain1.steal(contessa));
    CHECK_NOTHROW(captain2.block(captain1));
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.block(assassin));
    CHECK_NOTHROW(assassin.coup(duke));
    CHECK_EQ(5,game_1.players().size());
    CHECK_NOTHROW(ambassador.transfer(contessa,assassin));
    CHECK_NOTHROW(captain1.foreign_aid());
    CHECK_NOTHROW(captain2.foreign_aid());
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(assassin.foreign_aid());
}

TEST_CASE("error Game"){
    coup::Game game_1{};
    coup::Duke duke{game_1, "Moshe"};
	coup::Assassin assassin{game_1, "Yossi"};
	coup::Ambassador ambassador{game_1, "Meirav"};
	coup::Captain captain1{game_1, "Reut"};
    coup::Captain captain2{game_1, "Shlomi"};
	coup::Contessa contessa{game_1, "Gilad"};
    CHECK_THROWS(assassin.income());
    CHECK_THROWS(duke.coup(assassin));
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK_THROWS(captain1.block(captain2));
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.transfer(duke,assassin));
    CHECK_THROWS(captain1.block(captain1));
    CHECK_NOTHROW(captain2.income());
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_THROWS(duke.block(captain2));
    CHECK_NOTHROW(assassin.coup(captain1));
    CHECK_NOTHROW(ambassador.transfer(duke,assassin));
    CHECK_NOTHROW(captain2.block(captain1));
    CHECK_NOTHROW(contessa.block(assassin));
}
