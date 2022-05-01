#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Duke : public Player{
        public:
        Duke(Game game,std::string name): Player(_game,_name){}
        void tax() override;
        void block(const Player &player)override;
        std::string role() const override
        {
            return "Duke";
        } 
    };

}