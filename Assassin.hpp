#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Assassin : public Player{
        public:
        Assassin(Game &game, const string &name): Player{game,name}{}
        void coup(const Player &player) override;
        std::string role() const override
        {
            return "Assassin";
        } 
    };

}