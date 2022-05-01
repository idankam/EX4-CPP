#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Contessa : public Player{
        public:
        Contessa(Game &game, const string &name): Player{game,name}{}
        void block(Player &player)override;
        std::string role() const override
        {
            return "Contessa";
        } 
    };

}