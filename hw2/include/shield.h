#pragma once
#include <string>

namespace shield {
    
    class Shield {
        private: 
        std::string m_style;
        std::string m_material;
        int m_weight;
        std::string m_color;

        public: Shield(std::string style, std::string material, int weight, std::string color, bool thrown);

        public: bool thrown();
        public: void throwShield();
        
    };
}