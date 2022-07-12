#ifndef MODEL_HPP
#define MODEL_HPP
#include <stdint.h>


class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void saveCurrentScreen(uint8_t cScreen);
    uint8_t getCurrentScreen();
protected:
   ModelListener* modelListener;
   unsigned char activeScreen = 0;
};

#endif // MODEL_HPP
