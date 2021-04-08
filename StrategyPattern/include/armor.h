#pragma once
#include <string>

namespace shield {
    
    class Armor {
        private: 
        const std::string m_material;
        double m_defense;

        public: Armor(const std::string &material, double defense);

        public: void throwShield();

        public: const std::string material() const;
        public: double defense() const;
        
    };
}