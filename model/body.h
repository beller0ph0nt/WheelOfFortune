#include "vector.h"
#include "types.h"

class body
{
public:
    body_id id;

    vector center_of_mass;

    vector position;

    kilogram weight;
    vector linear_velocity;
    vector linear_acceleration;
//    vector force;

    scalar moment_of_inertia;
    scalar angular_speed;
    scalar angular_acceleration;
//    scalar torque;

    body():() {}
};
