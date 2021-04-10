#include "strategy.h"
#include <stdexcept>
#include <iostream>
#include <string>
//using namespace std;

namespace shippingStrat {

    //client
    class Strategy {
        public: void getPrice();
    }

    //strategies
    class Standard : public strategy {
        public: void getPrice() {
            double price = weight * 1.0;
            cout << "Standard price = " << price;
        }
    }

    class Exped : public strategy {
        public: void getPrice() {
            double price = weight * 2.0;
            cout << "Expedited price = " << price;
        }
    }

    class Overnight : public strategy {
        public: void getPrice() {
            double price = weight * 3.0;
            cout << "Overnight price = " << price;
        }
    }

    //context interface
    class Shipping {
        private: Strategy *m_strategy;

        public: enum shipType {standard, exped, overnight};

        public: void setStrat(int type);

        
    };

    void Shipping::setStrat(int type) {
        if (type = "standard") {
            strategy = new Standard();
        else if (type = "exped") {
            strategy = new Exped();
        else if (type = "overnight") {
            strategy = new Overnight();
        }
    }

    int main() {
        int select;
        double weight;
        
        cout << "Enter number to select shipping method: Standard(0), Expedited(1), or Overnight(3)";
        cin >> select;
        cout << "Enter weight";
        cin >> weight;

        Shipping.setStrat(select, weight)

        return 0;
    }
}