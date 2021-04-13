#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace shippingStrat {
    
    //interface
    class Strategy { 
        public: double getCost(double weight)
        { return 0; } //will be redefined
    };

    //strategies
    class Standard : public Strategy {
        public: double price = 1.0;

        public: double getCost(double weight) {
            double cost = price * weight;
            cout << cost << "\n";
            return cost;
        }
    };

    class Exped : public Strategy {
        public: double price = 2.0;

        public: double getCost(double weight) {
            double cost = price * weight;
            cout << cost << "\n";
            return cost;
        }
    };

    class Overnight : public Strategy {
        public: double price = 3.0;

        public: double getCost(double weight) {
            double cost = (price * weight) + 2.0;
            cout << cost << "\n";
            return cost;
        }
    };

    //context
    class Shipping {

        private: Strategy *my_strategy; //strategy pointer

        public: void setStrat(Strategy *str) { //pick strat
            my_strategy = str;
        }

        public: void getCost(double weight) {
            my_strategy->getCost(weight);
        }
    };
}