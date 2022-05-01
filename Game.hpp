#include <iostream>
#include<vector>

namespace coup{
    class Game{
        int _numOfPlayers;
        vector<Player> _players;
        bool _started; // until the first action or 6 players.
        int _turn;

        Game();
        
        std::string turn();
        void nextTurn(); //update the next turn
        vector<std::string> players();
        string::winner();
    };

}