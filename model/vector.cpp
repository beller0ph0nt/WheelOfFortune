#include "vector.h"

const vector vector::operator +(const vector& v)
{
    return vector(x + v.x, y + v.y);
}

const vector vector::operator -(const vector& v)
{
    return vector(x - v.x, y - v.y);
}

const vector vector::operator *(const vector& v)
{
    return x * v.x + y * v.y;
}

const vector vector::operator *(const scalar& s)
{
    return vector(x * s, y * s);
}
