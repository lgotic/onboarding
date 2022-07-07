#ifndef SLIKA4PRESENTER_HPP
#define SLIKA4PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika4View;

class slika4Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika4Presenter(slika4View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~slika4Presenter() {};

private:
    slika4Presenter();

    slika4View& view;
};

#endif // SLIKA4PRESENTER_HPP
