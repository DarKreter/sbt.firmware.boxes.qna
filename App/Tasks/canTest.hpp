//
// Created by jazon on 10/27/21.
//

#ifndef F1XX_PROJECT_TEMPLATE_CANTEST_HPP
#define F1XX_PROJECT_TEMPLATE_CANTEST_HPP

#include "TaskManager.hpp"

class CanTest : public Task {
public:
    CanTest();
    void initialize() override;
    void run() override;
};


#endif //F1XX_PROJECT_TEMPLATE_CANTEST_HPP
