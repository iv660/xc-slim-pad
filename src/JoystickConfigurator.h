#pragma once

#include "HardwareContainer.h"

namespace XC::SlimPad
{
    class JoystickConfigurator
    {
        private:
            HardwareContainer* container;
        public:
            JoystickConfigurator(HardwareContainer* container): container(container) {};

            void asAnalogJoystick();
    };
}

