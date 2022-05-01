#include "Ambassador.hpp"

using namespace std;
using namespace coup;

void Ambassador::transfer(Player &player1, Player &player2){
    this->checkMustBlock();
    this->checkIfIsInGame();
    Player::isInTheSameGame(player1, player2);
    Player::isInTheSameGame(player1, *this);
    player1.checkIfIsInGame();
    player2.checkIfIsInGame();
    // if(player1.getNumOfCoins() < 1){ // maybe unneeded
    //     throw invalid_argument("not enough coins!");   
    // }

    // transfer

    // this->getGame().nextTurn();
    
}
void Ambassador::block(Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    Player::isInTheSameGame(*this, player);
    if(player.getBlockState() != 2 || player.role() != "Captain"){
        throw invalid_argument("can't block!");   
    }

    // block
}