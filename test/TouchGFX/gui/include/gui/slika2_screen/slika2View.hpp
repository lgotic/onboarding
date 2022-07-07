#ifndef SLIKA2VIEW_HPP
#define SLIKA2VIEW_HPP

#include <gui_generated/slika2_screen/slika2ViewBase.hpp>
#include <gui/slika2_screen/slika2Presenter.hpp>

class slika2View : public slika2ViewBase
{
public:
    slika2View();
    virtual ~slika2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA2VIEW_HPP
