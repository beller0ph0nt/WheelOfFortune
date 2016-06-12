#include "point.h"
#include "types.h"

class vector
{
public:
    point x, y;

    vector(point x, point y):x(x), y(y) {}

    const vector operator +(const vector& v);
    const vector operator -(const vector& v);
    const scalar operator *(const vector& v);
    const scalar operator *(const scalar& s);

    const scalar len() const;
//    const scalar dot() const;
//    const scalar cross() const;
};
