#ifndef SLIKA5VIEW_HPP
#define SLIKA5VIEW_HPP

#include <gui_generated/slika5_screen/slika5ViewBase.hpp>
#include <gui/slika5_screen/slika5Presenter.hpp>

class slika5View : public slika5ViewBase
{
public:
    slika5View();
    virtual ~slika5View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA5VIEW_HPP
