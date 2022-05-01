#include <iostream>
#include "Game.hpp"

using namespace std;
namespace coup{
    class Player{
       protected:
           std::string _name;
           Game &_game;
           bool _inGame;
           int _numOfCoins;
           int _availableToBeBlock // 0-not available , 1- available to Duke(because he can block everyone),2- available to a specific player.
           bool _myTurn

        public:
            Player(Game game,std::string name):_name(name),_inGame(true),_numOfCoins(0),_availableToBeBlock(0){
                if(game->_started){
                    throw invalid_argument( "This game is already started");
                }else{
                    _game = game;
                    _game->players.push_back(this);
                    _game->numOfPlayers++;
                }
                if(game.numOfPlayers == 0){
                    _myTurn = true;
                }else{
                    _myTurn = false;
                }
            } 
            /// affiliate player to a game.

            virtual std::string role() const;
            virtual int coins() const{
                return this->_numOfCoins;
            }

            // actions
            void income(){};
            void foreign_aid(){};
            void coup(const Player &player){};
            void block(const Player &player){};

            // my functions
            
        
    }

}