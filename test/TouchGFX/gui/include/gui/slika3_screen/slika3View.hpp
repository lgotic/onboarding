#ifndef SLIKA3VIEW_HPP
#define SLIKA3VIEW_HPP

#include <gui_generated/slika3_screen/slika3ViewBase.hpp>
#include <gui/slika3_screen/slika3Presenter.hpp>

class slika3View : public slika3ViewBase
{
public:
    slika3View();
    virtual ~slika3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLIKA3VIEW_HPP
