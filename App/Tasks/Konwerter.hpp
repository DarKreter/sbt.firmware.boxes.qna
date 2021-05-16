//
// Created by darkr on 15.05.2021.
//
#ifndef F1XX_PROJECT_TEMPLATE_KONWERTER_HPP
#define F1XX_PROJECT_TEMPLATE_KONWERTER_HPP


#include <TaskManager.hpp>


struct Konwerter : public Task{
    
    
    Konwerter();
    void initialize() override;
    void run() override;
};



#endif //F1XX_PROJECT_TEMPLATE_KONWERTER_HPP
