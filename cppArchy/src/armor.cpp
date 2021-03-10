#include "armor.h"
#include <string>

namespace shield {
    
    Armor::Armor(std::string material, double defense) {
        m_material = material;
        m_defense = defense;
    }

    std::string Armor::material() {
        return m_material;
    }

    double Armor::defense() {
        return m_defense;
    }
}