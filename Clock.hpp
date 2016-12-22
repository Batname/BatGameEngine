#ifndef Clock_hpp
#define Clock_hpp

#include "includes.h"

namespace Timing {
    class Clock
    {
    public:
        Clock();
        void run();
        void update();
        float getDeltaTime();
    private:
        int deltaTime = 0;
        long long int lastFrame = 0;
    };
}

#endif /* Clock_hpp */
