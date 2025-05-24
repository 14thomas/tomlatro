// main.cpp
#include "CardPrinting.hpp"
#include "Suit.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>

int main() {
    std::cout << "give me a seed\n";
    unsigned long seed;
    std::cin >> seed;

    std::mt19937 engine(seed);

    std::vector<PlayingCard> playerDeck;
    playerDeck.reserve(52);

    Suit suitList[4] = {Suit::Spade, Suit::Heart, Suit::Club, Suit::Diamond};
    std::array<int, 13> chipValues = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            playerDeck.push_back(PlayingCard(chipValues[j], suitList[i]));
        }
    }

    std::shuffle(playerDeck.begin(), playerDeck.end(), engine);

    for (std::vector<PlayingCard>::iterator it = playerDeck.begin() ; it != playerDeck.end(); ++it) {printCard(*it);}

    return 0;
}
