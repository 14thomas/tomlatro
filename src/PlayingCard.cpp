#include <cstdlib>
#include <random>
#include "PlayingCard.hpp"

//new random card
PlayingCard::PlayingCard() {
    cardChips = rand() % 14;
    cardType = cardChips;
    suit = static_cast<Suit>(rand() % 4);
}

//new specific card
PlayingCard::PlayingCard(unsigned int value, Suit s, Enhancement e, Edition d, Seal seal)
  : cardChips(value),
    cardType(value),
    suit(s),
    enhancement(e),
    edition(d),
    seal(seal)
{}

//new card specifying the value and suit
PlayingCard::PlayingCard(unsigned int value, Suit s)
  : cardChips(value),
    cardType(value),
    suit(s)
{}

void PlayingCard::setType(unsigned int type) {
    cardType = type;
}

void PlayingCard::setChips(unsigned int value) {
    cardChips = value;
}

void PlayingCard::increaseChipsByOne() {
    cardChips++;
}