#ifndef Clock_hpp
#define Clock_hpp

#include "includes.h"

namespace Timing {
    class Clock
    {
    public:
        Clock();
        void update();
        float getDeltaTime();
    private:
        float deltaTime = 0.0f;
        long long int lastFrame = 0;
    };
}

#endif /* Clock_hpp */
