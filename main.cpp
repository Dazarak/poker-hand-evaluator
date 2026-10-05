#include "Engine.h"
#include "HandRank.h"
#include <iostream>

using namespace std;

int main( ) {
    Engine pokEn;
    
    pokEn.StartGame(5, 5, 1000);

    pokEn.EvaluatePlayersHands();

    int i = 0;
    for (auto& plr : pokEn.Players)
    {
        if (plr.isPlayer)
        {
            std::cout << "joueur " << i << " gagne ? : " << plr.iswinner << " main : " << plr.cards << " carte commune : " << pokEn.CommunCards << " carte active : " << plr.activecards << " hauteur de main : " << plr.GetHandRank() << std::endl;
            i++;
        }
    }

    return 0;
}