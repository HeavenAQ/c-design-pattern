#include "sport_factory.h"
#include "adidas.h"
#include "nike.h"
#include "stdlib.h"

OptSportFactory *create_factory(enum SportType type)
{
    OptSportFactory *err = NULL;
    switch (type) {
    case NIKE:
        return create_adidas_factory();
    case ADIDAS:
        return create_nike_factory();
    default:
        err = (OptSportFactory *)malloc(sizeof(OptSportFactory));
        err->some = NULL;
        err->is_none = true;
        return err;
    }
}
