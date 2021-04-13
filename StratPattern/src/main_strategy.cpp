#include <iostream>
#include <string>
using namespace std;

namespace shippingStrat {

    //client
    class Strategy {
        public: double getCost(double weight); //prototype
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
            double cost = price * weight;
            return cost;
        }
    };

    //context interface
    class Shipping {

        private: Strategy *my_strategy; //strategy pointer

        public: void setStrat(Strategy *str) { //pick strat
            my_strategy = str;
        }

        public: double getCost(double weight) { //define getCost depending on strat
            my_strategy->getCost(weight);
        }
    };

    int main(int argc, char** argv) {
        double weight = 2.0;
        //cout << "Enter weight in lbs";
        //cin >> weight;

        Standard standard;
        Exped exped;
        Overnight overnight;

        Shipping ship;

        ship.setStrat (&standard);
        cout << "Standard cost = ";
        ship.getCost(weight);

        ship.setStrat (&exped);
        cout << "Expedited cost = ";
        ship.getCost(weight);

        ship.setStrat (&overnight);
        cout << "Overnight cost = ";
        ship.getCost(weight);
        
        return 0;
    }
}