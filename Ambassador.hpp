#include "Game.hpp"
#include "Player.hpp"
#include "Captain.hpp"

namespace coup{
    class Ambassador : public Player{
        
        public:
        Ambassador(Game &game, const string &name): Player{game,name}{}
        void transfer(Player &player1, Player &player2);
        void block(Player &player) override;
        std::string role() const override
        {
            return "Ambassador";
        }  
    };

}