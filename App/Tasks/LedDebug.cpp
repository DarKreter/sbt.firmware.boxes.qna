#include "TaskManager.hpp"
#include <Hardware.hpp>
#include <LedDebug.hpp>

LedDebug::LedDebug() : PeriodicTask({}, 2, 100) {}

void LedDebug::initialize() {
//  Hardware::configureClocks();
  Hardware::enableGpio(GPIOC, GPIO_PIN_13, Gpio::Mode::Output);
}

void LedDebug::run() { Hardware::toggle(GPIOC, GPIO_PIN_13); }
