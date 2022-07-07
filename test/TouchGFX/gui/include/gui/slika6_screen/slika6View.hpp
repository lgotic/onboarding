#ifndef SLIKA6VIEW_HPP
#define SLIKA6VIEW_HPP

#include <gui_generated/slika6_screen/slika6ViewBase.hpp>
#include <gui/slika6_screen/slika6Presenter.hpp>

class slika6View : public slika6ViewBase
{
public:
    slika6View();
    virtual ~slika6View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA6VIEW_HPP
