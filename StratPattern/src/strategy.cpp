#include "strategy.h"
#include <stdexcept>

namespace shippingStrat {

    class Shipping {
        public: enum shipType {standard, exped, overnight};

        public: void setStrat(shipType);

        private: Strategy *strategy;
    };

    class Strategy {
        
    }

    class Standard : public strategy {
        return price = 1.0;
    }

    class Exped : public strategy {
        return price = 2.0;
    }

    class Overnight : public strategy {
        return price = 3.0;
    }

}