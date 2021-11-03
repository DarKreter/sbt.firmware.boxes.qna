//
// Created by jazon on 10/27/21.
//

#include "canTest.hpp"
#include "Hardware.hpp"

CanTest::CanTest()  : PeriodicTask({}, 2, 500) {

}

void CanTest::initialize() {
    Hardware::can.Initialize(BoxId::BOX1, {});
}

void CanTest::run() {
    Hardware::can.Send(ParameterId::ACCEL_X, 0.43f);
}