#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <stdint.h>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void selectMeni1(){}
    virtual void selectMeni2(){}
    virtual void selectMeni3(){}
    virtual void selectMeni4(){}
    virtual void selectMeni5(){}
    virtual void changeScreen(uint8_t selectedScreen) {}
    virtual void updateValues() {}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
