#pragma once
#include <string>

namespace shield {
    
    class Armor {
        private: 
        std::string m_material;
        double m_defense;

        public: Armor(std::string material, double defense);

        public: void throwShield();

        public: std::string material();
        public: double defense();
        
    };
}