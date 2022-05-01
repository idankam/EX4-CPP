#include "Assassin.hpp"

using namespace std;
using namespace coup;

void Assassin::coup(const Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);

    if(this->getNumOfCoins() < 3){
        throw invalid_argument("not enough coins!");   
    }

    if(this->getNumOfCoins() < 7){
        this->_availableToBeBlock = 2;
    }
    // coup

    // this->getGame().nextTurn();
}