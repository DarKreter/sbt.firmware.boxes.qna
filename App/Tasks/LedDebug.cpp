#include <LedDebug.hpp>
#include <Hardware.hpp>
#include "TaskManager.hpp"


LedDebug::LedDebug() : PeriodicTask({}, 100, 2){

}

void LedDebug::initialize() {
    Hardware::configureClocks();
    Hardware::enableGpio(GPIOC, GPIO_PIN_13, Gpio::Mode::Output);
}

void LedDebug::run() {
    Hardware::toggle(GPIOC, GPIO_PIN_13);
}
