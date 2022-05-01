#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Player;
    class Game;

    static int numGames = 0;
    

    class Game{

        private:

        int _numOfPlayers;
        std::vector<Player> _players;
        bool _started; // until the first action or 6 players.
        int _turn;
        int _gameID;

        public: 

        Game();
        
        std::string turn();
        void nextTurn(); //update the next turn
        vector<std::string> players();
        string winner();
        void addPlayer(Player &p);
        void startGame();
        bool isGameStarted();
        int getNumbersOfPlayers();
        int getGameID();

    };

}