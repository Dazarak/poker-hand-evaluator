#ifndef GAMECONTEXT_H
#define GAMECONTEXT_H

#include <cstdint>

class GameContext 
{
    public:
        uint8_t currentTurn = 0;
        uint8_t dealearPos = 0;
        uint8_t currentBet = 0;
        uint8_t pot = 0;
        uint8_t currentStep = 0;
};

#endif