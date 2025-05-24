#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "PlayingCard.hpp"

// Converts enums into strings
inline const char* to_string(Enhancement e) {
    switch(e) {
      case Enhancement::None:  return "None";
      case Enhancement::Bonus: return "Bonus";
      case Enhancement::Mult:  return "Mult";
      case Enhancement::Wild:  return "Wild";
      case Enhancement::Glass: return "Glass";
      case Enhancement::Steel: return "Steel";
      case Enhancement::Stone: return "Stone";
      case Enhancement::Gold:  return "Gold";
      case Enhancement::Lucky: return "Lucky";
    }
    return "?";
}

inline const char* to_string(Edition d) {
    switch(d) {
      case Edition::Base:        return "Base";
      case Edition::Foil:        return "Foil";
      case Edition::Holographic: return "Holo";
      case Edition::Polychrome:  return "Poly";
      case Edition::Negative:    return "Neg";
    }
    return "?";
}

inline const char* to_string(Seal s) {
    switch(s) {
      case Seal::None:   return "None";
      case Seal::Gold:   return "Gold";
      case Seal::Red:    return "Red";
      case Seal::Blue:   return "Blue";
      case Seal::Purple: return "Purple";
    }
    return "?";
}

inline char suit_symbol(Suit s) {
    switch(s) {
      case Suit::Heart:   return 'h';
      case Suit::Diamond: return 'd';
      case Suit::Club:    return 'c';
      case Suit::Spade:   return 's';
    }
    return '?';
}

/// prints an ASCII box around the card’s info
inline void printCard(const PlayingCard& c) {
    const int W = 11;
    std::string val = std::to_string(c.getType());
    std::string enh = to_string(c.getEnhancement());
    std::string ed  = to_string(c.getEdition());
    std::string sl  = to_string(c.getSeal());
    char suit       = suit_symbol(static_cast<Suit>(c.getSuit()));

    auto hline = std::string(W, '-');

    std::cout
      << "┌" << hline << "┐\n"

      // value in top-left, suit top-right
      << "│ " << std::setw(2) << val 
               << std::setw(W - 2 - 2) << suit 
          << " │\n"

      // enhancement centered
      << "│ " << std::setw((W - 2 - (int)enh.size())/2) << ""
               << enh
               << std::setw((W - 2 - (int)enh.size()+1)/2) << ""
          << " │\n"

      // edition centered
      << "│ " << std::setw((W - 2 - (int)ed.size())/2) << ""
               << ed
               << std::setw((W - 2 - (int)ed.size()+1)/2) << ""
          << " │\n"

      // seal centered
      << "│ " << std::setw((W - 2 - (int)sl.size())/2) << ""
               << sl
               << std::setw((W - 2 - (int)sl.size()+1)/2) << ""
          << " │\n"

      << "└" << hline << "┘\n";
}
