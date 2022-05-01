#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Duke : public Player{
        public:
        
        Duke(Game &game, const string &name): Player{game,name}{}
        void tax();
        void block(Player &player)override;
        std::string role() const override
        {
            return "Duke";
        } 
    };

}