#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <iomanip>
#include <array>

class Card {
public:
    uint8_t value : 4;
    uint8_t symbole : 3;
    uint8_t isCard : 1;

    Card();
    Card(uint8_t, uint8_t, bool);

    bool operator==(const Card& other) const = default;

    friend std::ostream& operator<<(std::ostream& os, const Card& card) {
        if (card.isCard) {
            os << "Val " << std::left << std::setw(2) << static_cast<int>(card.value) 
               << " Sym " << static_cast<int>(card.symbole);
        }
        return os;
    }
};

template <size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<Card, N>& cards) {
    os << "[ ";
    for (size_t i = 0; i < N; ++i) {
        os << cards[i];
        
        if (i < N - 1 && cards[i + 1].isCard && cards[i].isCard) {
            os << " | ";
        }
    }
    os << " ]";
    return os;
}
#endif