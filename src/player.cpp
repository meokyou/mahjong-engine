#include "player.h"

player::player(std::string w, bool d, std::array<tile, 14> p) : pan(p) {
    wind = w;
    dealer = d;
}