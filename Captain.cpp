#include "Captain.hpp"

using namespace std;
using namespace coup;

void Captain::steal(Player &player){
    this->checkMustBlock();
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);
    // if(player.getNumOfCoins() <= 1){
    //     throw invalid_argument( "can't steal from player with less than 2 coins!");
    // }

    // steal

    // this->getGame().nextTurn();
}

void Captain::block(Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    Player::isInTheSameGame(*this, player);
    if(player.getBlockState() != 2 || player.role() != "Captain"){
        throw invalid_argument("can't block!");   
    }

    // block
}