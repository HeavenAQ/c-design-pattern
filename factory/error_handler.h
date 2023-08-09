#ifndef ERROR_HANDLER_H_
#define ERROR_HANDLER_H_
#include <stdbool.h>
#define Option(T)                                                              \
    struct {                                                                   \
        T some;                                                                \
        bool is_none;                                                          \
    }

#endif
