#pragma once

#include <iostream>
#include "Game.hpp"

using namespace std;
namespace coup{

    class Game;
    class Player;

    class Player{
       protected:
           std::string _name;
           Game _game;
           int _gameID;
           int _turnID;
           int _numOfCoins;
           int _availableToBeBlock; // 0-not available , 1- available to Duke(because he can block everyone),2- available to a specific player.
           bool _myTurn;
           bool _isInGame;


        public:
            Player(Game &currGame, const string& name);
            /// affiliate player to a game.

            virtual string role() const = 0;
            virtual int coins() const;

            // actions
            void income();
            void foreign_aid();
            virtual void coup(const Player &player);
            virtual void block(Player &player);

            // my functions
            string getName();
            void setTurnID(int num);
            int getBlockState();
            int getNumOfCoins();
            int getGame() const;
            bool isInGame() const;
            static void isInTheSameGame(const Player &player1, const Player &player2);
            void checkIfIsInGame() const;
            void notAvailableToBlock();
            void checkMustBlock();

            virtual ~Player() = default;
    };
}