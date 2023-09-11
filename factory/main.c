#include "sport_factory.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    OptSportFactory *factory = create_factory(ADIDAS);
    if (factory->is_none) {
        printf("factory is none\n");
        exit(EXIT_FAILURE);
    }

    OptSportFactory *factory2 = create_factory(NIKE);
    if (factory2->is_none) {
        printf("factory2 is none\n");
        exit(EXIT_FAILURE);
    }

    const SportFactory *nike = factory->some;
    const SportFactory *adidas = factory2->some;
    printf("nike->brand_name: %s\nnike->size: %d\n", nike->brand_name,
           nike->size);

    printf("adidas->brand_name: %s\nadidas->size: %d\n", adidas->brand_name,
           adidas->size);
    free(factory);
    free(factory2);
}
