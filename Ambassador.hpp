
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Ambassador : public Player{
        
        public:
        Ambassador(Game game,std::string name): Player(_game,_name){}
        void transfer(const Player &player1,const Player &player1);
        void block(const Captain &capitan)override;
        std::string role() const override
        {
            return "Ambassador";
        }  
    };

}