#include "shield.h"
#include <stdexcept>

namespace shield {

    Shield::Shield(std::string style, std::string color, int weight, bool thrown) {
        m_style = style;
        m_color = color;
        m_weight = weight;
        m_thrown = thrown;
    }

    void Shield::throwShield() {
        m_thrown = true;
    }

    std::string Shield::style() {
        return m_style;
    }

    std::string Shield::color() {
        return m_color;
    }

    int Shield::weight() {
        return m_weight;
    }

    bool Shield::thrown() {
        return m_thrown;
    }
}