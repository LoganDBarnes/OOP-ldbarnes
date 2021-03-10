#include "armor.h"
#include <string>

namespace shield {
    
    Armor::Armor(std::string material, double defense) {
        m_material = material;
        m_defense = defense;
    }

    std::string Shield::material() {
        return m_material;
    }

    double Shield::defense() {
        return m_defense;
    }
}