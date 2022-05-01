#include "Game.hpp"

using namespace std;
using namespace coup;

Game::Game(){
    this->_numOfPlayers = 0;
    this->_started = false;
    this->_turn = -1;
    this->_gameID = coup::numGames;
    coup::numGames++;
    // Games.push_back(this);
}
        
std::string Game::turn(){
    Player player =  this->_players.at((size_t)this->_turn);
    return player.getName();
}

//update the next turn
void Game::nextTurn(){
    this->_turn = (int) (this->_turn + 1) % (int) this->_players.size();
    Player p = this->_players[(size_t) this->_turn];
    p.notAvailableToBlock();
}

vector<string> Game::players(){
    vector<string> names;
    for (Player p : this->_players){
        names.push_back(p.getName());
    }
    return names;
}

string Game::winner(){
    if(this->_players.size() > 1){
        throw invalid_argument( "There is no winner yet.");
    }
    return this->_players[0].getName();
}
void Game::addPlayer(Player &p){
    if(this->_started == true){
        throw invalid_argument("game already started.");
    }
    
    if(this->_numOfPlayers == 6){
        throw invalid_argument("Max players, can't add more.");
    }
    this->_players.push_back(p);
    p.setTurnID(_numOfPlayers);
    this->_numOfPlayers++;
};
void Game::startGame(){
    if(this->_started == true){
        throw invalid_argument("already started.");
    }
    if(this->_numOfPlayers < 2){
        throw invalid_argument("at least 2 players needed.");
    }
    this->_started = true;
};
bool Game::isGameStarted(){
    return this->_started;
};
int Game::getNumbersOfPlayers(){
    return this->_numOfPlayers;
}

int Game::getGameID(){
    return this->_gameID;
}