#pragma once
#include <string>

namespace shippingStrat {
    
    //client
    class Strategy { 
        public: double getCost(double weight) //prototype
        {
            return 0;
        }
    };

    //strategies
    class Standard : public Strategy {
        public: double price = 1.0;

        public: double getCost(double weight) {
            double cost = price * weight;
            return cost;
        }
    };

    class Exped : public Strategy {
        public: double price = 2.0;

        public: double getCost(double weight) {
            double cost = price * weight;
            return cost;
        }
    };

    class Overnight : public Strategy {
        public: double price = 3.0;

        public: double getCost(double weight) {
            double cost = (price * weight) + 2.0;
            return cost;
        }
    };

    //context interface
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