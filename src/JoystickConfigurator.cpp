#include <AnalogJoystick.h>

#include "JoystickConfigurator.h"
#include "ApplianceFactory.h"


void XC::SlimPad::JoystickConfigurator::asAnalogJoystick()
{
    container->analogJoystick = new XC::Hardware::AnalogJoystick(JOYSTICK_X_PIN, JOYSTICK_Y_PIN);
}