#ifndef SLIKA1VIEW_HPP
#define SLIKA1VIEW_HPP

#include <gui_generated/slika1_screen/slika1ViewBase.hpp>
#include <gui/slika1_screen/slika1Presenter.hpp>

class slika1View : public slika1ViewBase
{
public:
    slika1View();
    virtual ~slika1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA1VIEW_HPP
