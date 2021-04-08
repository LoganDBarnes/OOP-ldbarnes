#include "armor.h"
#include <string>

namespace shield {
    
    Armor::Armor(const std::string &material, double defense) 
    : m_material(material), m_defense(defense){}

    const std::string Armor::material() const {
        return m_material;
    }

    double Armor::defense() const {
        return m_defense;
    }
}