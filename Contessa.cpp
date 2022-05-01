#include "Contessa.hpp"

using namespace std;
using namespace coup;

void Contessa::block(Player &player){
    this->checkIfIsInGame();
    player.checkIfIsInGame();
    isInTheSameGame(*this, player);
    
    if(player.getBlockState() != 2 || player.role() != "Assassin"){
        throw invalid_argument( "You can't block!");   
    }
    // block

    
}