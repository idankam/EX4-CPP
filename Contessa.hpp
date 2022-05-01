#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Contessa : public Player{
        public:
        Contessa(Game game,std::string name): Player(_game,_name){}
        void block(const Assassin &assassin)override;
        std::string role() const override;
        {
            return "Contessa";
        } 
    };

}