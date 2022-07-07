#ifndef SLIKA6PRESENTER_HPP
#define SLIKA6PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika6View;

class slika6Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika6Presenter(slika6View& v);

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

    virtual ~slika6Presenter() {};

private:
    slika6Presenter();

    slika6View& view;
};

#endif // SLIKA6PRESENTER_HPP
