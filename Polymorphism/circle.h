#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h" /* the base class interface */
/* Rectangle's attributes... */
typedef struct
{
    Shape super; /* <== inherits Shape */
    /* attributes added by this subclass... */
    uint16_t radius;
} Circle;
/* constructor prototype */
void Circle_ctor(Circle *const me, int16_t x, int16_t y,
                 uint16_t radius);
#endif /* RECT_H */
