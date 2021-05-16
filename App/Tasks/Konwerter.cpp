//
// Created by darkr on 15.05.2021.
//
#include <stdarg.h>
#include <string.h>
#include "Konwerter.hpp"
#include "Hardware.hpp"


Konwerter::Konwerter() : Task({}, 100, 2){

}

void Konwerter::initialize() {
    Hardware::configureClocks();
    Hardware::enableGpio(GPIOC, GPIO_PIN_13, Gpio::Mode::Output);
    
    
    //Hardware::uart1.SetBaudRate(57600);
    //Hardware::uart1.ChangeModeToBlocking(500);
    Hardware::uart1.EnablePrintf();
    Hardware::uart1.Initialize();
}

void Konwerter::run()
{
    if(!Hardware::uart1.IsRxComplete())
        return;

    Hardware::uart1.printf("No hej = \"%#x\"\r", 122);
    Hardware::toggle(GPIOC, GPIO_PIN_13);
}
