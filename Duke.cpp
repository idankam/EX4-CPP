#include "Duke.hpp"

using namespace std;
using namespace coup;

void Duke::tax(){
    this->checkIfIsInGame();
    this->checkMustBlock();

    // this->getGame().nextTurn();
}

void Duke::block(Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);

    if(player.getBlockState() != 1){
        throw invalid_argument( "You can't block!");   
    }
    // block
}