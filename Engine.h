#ifndef ENGINE_H
#define ENGINE_H

#include "HandRank.h"
#include "Player.h"
#include "Card.h"
#include "Config.h"
#include "GameContext.h"

#include <algorithm>
#include <array>

using namespace std;

// 10 Royal flush
// 9  Straight flush
// 8  Four of kind
// 7  Full house
// 6  Flush
// 5  Straight
// 4  Three of kind
// 3  Two pair
// 2  Pair
// 1  Highcard
// 0  Empty

class Engine
{
    public:
        GameContext Context;
        std::array<Card, Config::MAX_CARDS> CommunCards {};
        std::array<Player, Config::MAX_PLAYERS> Players {};

        void EvaluatePlayersHands();
        void StartGame(int nbPlayer = 9, int nbCardsPerPlayers = 5, int startMoney = 1000);
        void GetPossibleAction();
        void ExecutePossibleAction();

    private:
        
        void givePlayersScore();

        std::array<Card, Config::CARDS_PER_PLAYER> isRoyalFlush(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isStraightFlush(std::array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isFourOfKind(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isFullHouse(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isFlush(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isStraight(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isThreeOfKind(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isTwoPair(array<Card, Config::MAX_CARDS>&);
        std::array<Card, Config::CARDS_PER_PLAYER> isPair(array<Card, Config::MAX_CARDS>&);

        Card DrawCard(std::array<Card, 52>&, size_t&);
        void SortCards(array<Card, Config::MAX_CARDS>&);
        void SortCardsBySymbole(array<Card, Config::MAX_CARDS>&);
        void SortPlayersRank(std::array<Player, Config::MAX_CARDS>&);
}; 

#endif