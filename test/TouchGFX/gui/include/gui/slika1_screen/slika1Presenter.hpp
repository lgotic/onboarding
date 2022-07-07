#ifndef SLIKA1PRESENTER_HPP
#define SLIKA1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika1View;

class slika1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika1Presenter(slika1View& v);

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

    virtual ~slika1Presenter() {};

private:
    slika1Presenter();

    slika1View& view;
};

#endif // SLIKA1PRESENTER_HPP
