#include <TFTScreen.h>
#include <ToggleButton.h>

#include "ApplianceFactory.h"
#include "JoystickConfigurator.h"

using namespace XC::SlimPad;

JoystickConfigurator ApplianceFactory::useJoystick()
{
    return JoystickConfigurator(&container);
}

XC::Hardware::Appliance ApplianceFactory::createAppliance()
{
    XC::Hardware::Appliance appliance;

    // Pre-configured devices
    appliance.screen = new XC::Hardware::TFTScreen(CS, DC, RST);
    appliance.pauseButton = new XC::Hardware::ToggleButton(PAUSE_BUTTON_PIN);

    // Configurable devices
    appliance.analogJoystick = container.analogJoystick;
    
    return appliance;
}
