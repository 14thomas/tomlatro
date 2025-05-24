// PlayingCard.hpp
#pragma once
#include "Modifier.hpp"
#include "Suit.hpp"

class PlayingCard {
private:
    unsigned int cardChips;
    unsigned int cardType;
    Suit         suit;
    Enhancement  enhancement{Enhancement::None};
    Edition      edition    {Edition::Base};
    Seal         seal       {Seal::None};

public:
    explicit PlayingCard();
    explicit PlayingCard(unsigned int value, Suit s, Enhancement e, Edition d, Seal seal);
    explicit PlayingCard(unsigned int value, Suit s);

    // Amount of chips
    unsigned int getChips() const { return cardChips; }
    void setChips(unsigned int newValue);
    void increaseChipsByOne();
   
    // type of card (2, K, J)
    unsigned int getType() const { return cardType; }
    void setType(unsigned int type);

    // suit of Card 
    Suit getSuit() const { return suit; }
    void setSuit(Suit s) { suit = s; }

    // modifiers
    Enhancement getEnhancement() const { return enhancement; }
    Edition     getEdition()     const { return edition;     }
    Seal        getSeal()        const { return seal;        }
    void setEnhancement(Enhancement e) { enhancement = e; }
    void setEdition(Edition e)         { edition     = e; }
    void setSeal(Seal s)               { seal        = s; }

};