#include "adidas.h"
#include "sport_factory.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void make_shoes(const SportFactory *factory)
{
    printf("brand_name: %s\n", factory->brand_name);
    printf("Size: %d\n", factory->size);
}

static void make_shirts(const SportFactory *factory)
{
    printf("brand_name: %s\n", factory->brand_name);
    printf("Size: %d\n", factory->size);
}

OptSportFactory *create_adidas_factory(void)
{
    SportFactory *factory = (SportFactory *)malloc(sizeof(SportFactory));
    factory->brand_name = "adidas";
    factory->size = 14;
    factory->make_shoes = &make_shoes;
    factory->make_shirts = &make_shirts;

    OptSportFactory *rtn = (OptSportFactory *)malloc(sizeof(SportFactory));
    rtn->some = factory;
    rtn->is_none = false;

    return rtn;
}
