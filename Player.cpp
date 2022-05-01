#include "Player.hpp"

using namespace std;
using namespace coup;

Player::Player(Game &game, const string &name) {
    game.addPlayer(*this);
    this->_gameID = game.getGameID();
    this->_name = name;
    this->_numOfCoins = 0;
    this->_availableToBeBlock = 0;
    this->_isInGame = true;
    if(game.getNumbersOfPlayers() == 1){
        this->_myTurn = true;
    }else{
        this->_myTurn = false;
    }
} 

int Player::coins() const{
    return this->_numOfCoins;
}

void Player::income(){
    this->checkMustBlock();
    this->checkIfIsInGame();

    this->_numOfCoins++;


    // coup::_Games[(size_t)(this->_gameID)].nextTurn();
}

void Player::foreign_aid(){
    this->checkMustBlock();
    this->checkIfIsInGame();

    this->_numOfCoins+=2;
    this->_availableToBeBlock=1;

    // coup::_Games[(size_t)(this->_gameID)].nextTurn();
}

void Player::coup(const Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);
    
    if(_numOfCoins < 7){
        throw invalid_argument( "You need more coins!");
    }
    
    // do coup

    this->_availableToBeBlock=1;

    // coup::_Games[(size_t)(this->_gameID)].nextTurn();
}

void Player::block(Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);
    
    throw invalid_argument( "Can't block!");
};

string Player::getName(){
    return this->_name;
}
void Player::setTurnID(int num){
    this->_turnID = num;
}
int Player::getBlockState(){
    return this->_availableToBeBlock;
}

int Player::getNumOfCoins(){
    return this->_numOfCoins;
}

int Player::getGame() const{
    return this->_gameID;
}

bool Player::isInGame() const{
    return this->_isInGame;
}

void Player::checkIfIsInGame() const{
    if(!this->isInGame()){
        throw invalid_argument( "Player not in the game!");
    }
}

void Player::isInTheSameGame(const Player &player1, const Player &player2){
    if(player1.getGame() != player2.getGame()){
        throw invalid_argument( "Players not in thesame  game!");
    }
}

void Player::notAvailableToBlock(){
    this->_availableToBeBlock = 0;
}

void Player::checkMustBlock(){
    if(this->_numOfCoins >= 10){
        throw invalid_argument( "You must coup!");
    }
}