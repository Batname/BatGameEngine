#include "Clock.hpp"

namespace Timing {
    Clock::Clock()
    {
    }
    
    void Clock::run()
    {
        lastFrame = QDateTime::currentMSecsSinceEpoch();
    }
    
    void Clock::update()
    {
        long long int currentFrame = QDateTime::currentMSecsSinceEpoch();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
    }
    
    float Clock::getDeltaTime()
    {
        return (float)deltaTime / 1000;
    }
}

