#ifndef SPORT_FACTORY_H_
#define SPORT_FACTORY_H_
#include "error_handler.h"

typedef struct SportFactory SportFactory;
enum SportType { ADIDAS, NIKE };

struct SportFactory {
    int size;
    const char *brand_name;
    void (*make_shoes)();
    void (*make_shirts)();
};

typedef Option(SportFactory *) OptSportFactory;
extern OptSportFactory *create_factory(enum SportType type);

#endif
