#ifndef SLIKA5PRESENTER_HPP
#define SLIKA5PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika5View;

class slika5Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika5Presenter(slika5View& v);

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

    virtual ~slika5Presenter() {};

private:
    slika5Presenter();

    slika5View& view;
};

#endif // SLIKA5PRESENTER_HPP
