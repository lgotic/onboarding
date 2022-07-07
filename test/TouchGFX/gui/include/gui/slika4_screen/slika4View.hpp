#ifndef SLIKA4VIEW_HPP
#define SLIKA4VIEW_HPP

#include <gui_generated/slika4_screen/slika4ViewBase.hpp>
#include <gui/slika4_screen/slika4Presenter.hpp>

class slika4View : public slika4ViewBase
{
public:
    slika4View();
    virtual ~slika4View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA4VIEW_HPP
