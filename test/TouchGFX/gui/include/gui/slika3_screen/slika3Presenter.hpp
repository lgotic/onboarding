#ifndef SLIKA3PRESENTER_HPP
#define SLIKA3PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class slika3View;

class slika3Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    slika3Presenter(slika3View& v);

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

    virtual ~slika3Presenter() {};

private:
    slika3Presenter();

    slika3View& view;
};

#endif // SLIKA3PRESENTER_HPP
