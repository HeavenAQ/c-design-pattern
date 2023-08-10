#include "sport_factory.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    OptSportFactory *factory = create_factory(ADIDAS);
    OptSportFactory *factory2 = create_factory(NIKE);

    SportFactory *nike = factory->some;
    SportFactory *adidas = factory2->some;
    printf("nike->brand_name: %s\nnike->size: %d\n", nike->brand_name,
           nike->size);

    printf("adidas->brand_name: %s\nadidas->size: %d\n", adidas->brand_name,
           adidas->size);
    free(factory);
    free(factory2);
}
