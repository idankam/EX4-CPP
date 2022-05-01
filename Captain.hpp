#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Captain : public Player{
        public:
        Captain(Game game,std::string name): Player(_game,_name){}
        void steal(const Player &player) override;
        void block(const Captain &capitan)override;
        std::string role() const override
        {
            return "Captain";
        } 
    };

}