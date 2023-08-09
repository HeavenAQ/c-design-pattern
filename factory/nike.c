#include "nike.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void make_shoes(SportFactory *factory)
{
    printf("brand_name: %s\n", factory->brand_name);
    printf("Size: %d\n", factory->size);
}

static void make_shirts(SportFactory *factory)
{
    printf("brand_name: %s\n", factory->brand_name);
    printf("Size: %d\n", factory->size);
}

OptSportFactory *create_nike_factory()
{
    SportFactory *factory = (SportFactory *)malloc(sizeof(OptSportFactory));
    factory->make_shoes = make_shoes;
    factory->make_shirts = make_shirts;
    factory->brand_name = "Nike";
    factory->size = 42;

    OptSportFactory *rtn = (OptSportFactory *)malloc(sizeof(OptSportFactory));
    rtn->some = factory;
    rtn->is_none = false;
    return rtn;
}
