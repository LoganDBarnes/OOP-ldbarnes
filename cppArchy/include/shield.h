#pragma once
#include <string>
#include "armor.h"

namespace shield {
    
    class Shield: public Armor {
        private: 
        std::string m_style;
        std::string m_color;
        int m_weight;
        bool m_thrown;

        public: Shield(); //default shield

        public: Shield(std::string material, double defense, 
                    std::string style, std::string color, int weight, bool thrown);

        public: void throwShield();

        public: std::string style();
        public: std::string color();
        public: int weight();
        public: bool thrown();
       
    };
}