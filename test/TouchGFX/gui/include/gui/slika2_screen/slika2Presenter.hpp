#ifndef SLIKA2PRESENTER_HPP
#define SLIKA2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika2View;

class slika2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika2Presenter(slika2View& v);

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

    virtual ~slika2Presenter() {};

private:
    slika2Presenter();

    slika2View& view;
};

#endif // SLIKA2PRESENTER_HPP
