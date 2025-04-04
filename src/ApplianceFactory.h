#pragma once

#include <Appliance.h>
#include <Arduino.h>

#include "HardwareContainer.h"
#include "JoystickConfigurator.h"

#define CS 10
#define DC 8
#define RST 9
#define PAUSE_BUTTON_PIN PIN3
#define JOYSTICK_X_PIN A0
#define JOYSTICK_Y_PIN A1

namespace XC::SlimPad {
    class ApplianceFactory
    {
        private:
            XC::Hardware::Appliance appliance;
            HardwareContainer container;
        public:
            JoystickConfigurator useJoystick();

            XC::Hardware::Appliance createAppliance();
    };
}
