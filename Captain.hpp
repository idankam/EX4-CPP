#pragma once
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Captain : public Player{
        public:
        Captain(Game &game, const string &name): Player{game,name}{}
        void steal(Player &player);
        void block(Player &player)override;
        std::string role() const override { return "Captain"; } 
    };
}