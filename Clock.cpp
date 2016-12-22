#include "Clock.hpp"

namespace Timing {
    Clock::Clock()
    {
    }
    
    void Clock::update()
    {
        long long int currentFrame = QDateTime::currentMSecsSinceEpoch();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
    }
    
    float Clock::getDeltaTime()
    {
        return deltaTime;
    }
}

