#include "strategy.h"
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>

namespace shippingStrat {

    class Shipping {
        public: enum shipType {standard, exped, overnight};

        public: void setStrat(string type, double price);

        private: Strategy *strategy;
    };

    class Strategy {
        public: Strategy(shipType);
        public: double price;
    }

    class Standard : public strategy {
        public: Standard(double price): Strategy(price){};
        return price = 1.0;
    }

    class Exped : public strategy {
        public: Exped(double price): Strategy(price){};
        return price = 2.0;
    }

    class Overnight : public strategy {
        public: Overnight(double price): Strategy(price){};
        return price = 3.0;
    }

    void Shipping::setStrat(string type, double price) {
        if (type = "standard") {
            strategy = new Standard(price);
        else if (type = "exped") {
            strategy = new Exped(price);
        else if (type = "overnight") {
            strategy = new Overnight(price);
        }
    }

    int main() {
        std::string select;
        
        cout << "Enter number to select shipping method: Standard(0), Expedited(1), or Overnight(3)";
        cin >> select;

        while (select) {

        }

        return 0;
    }
}