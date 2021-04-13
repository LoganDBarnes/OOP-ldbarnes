#include <iostream>
#include <string>
using namespace std;

namespace shippingStrat {

    //client
    class Strategy {
        public: void getPrice(); //prototype
    };

    //strategies
    class Standard : public Strategy {
        public: double price = 1.0;
        public: void getPrice() {
            cout << "Standard price = " << price;
        }
    };

    class Exped : public Strategy {
        public: double price = 2.0;
        public: void getPrice() {
            cout << "Expedited price = " << price;
        }
    };

    class Overnight : public Strategy {
        public: double price = 3.0;
        public: void getPrice() {
            cout << "Overnight price = " << price;
        }
    };

    //context interface
    class Shipping {
        private: Strategy *my_strategy; //strategy pointer

        public: void setStrat(Strategy *str) { //pick strat
            my_strategy = str;
        }

        public: void getPrice() { //define getPrice depending on strat
            my_strategy->getPrice();
        }
    };

    int main(int argc, char** argv) {
        //double weight;
        //cout << "Enter weight in lbs";
        //cin >> weight;

        Standard standard;
        Exped exped;
        Overnight overnight;

        Shipping ship;

        ship.setStrat (&standard);
        ship.getPrice();

        ship.setStrat (&exped);
        ship.getPrice();

        ship.setStrat (&overnight);
        ship.getPrice();
        
        return 0;
    }
}